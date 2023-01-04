using System;
using System.Linq;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;

public class ClickSong : MonoBehaviour
{
    public string SongName;
    public Material DefaultMaterial;

    List<SongNote> keysToPlay;
    List<PianoCube> objects = new List<PianoCube>();
    List<ClickedNote> ClickedNotes;
    int litKey = 0;
    float startTime;
    float width = 0.02f;
    float depth = 0.02f;
    float distance = 0.25f;
    float minTime;
    float keyFactor = 0.2f;
    float speed { get { return keyFactor / 4; } } 

    List<SongNote> whiteKeys;
    

    void Start()
    {
        StartSong();
    }

    public void SetSongAndStart(string songName)
    {
        SongName = songName;
        StartSong();
    }

    public void StartSong()
    {
        if (string.IsNullOrWhiteSpace(SongName))
        {
            return;
        }
        if(keysToPlay != null && keysToPlay.Any()) {
            SetOriginalMaterial(keysToPlay);
        }
        keysToPlay = new List<SongNote>();
        if (objects.Any())
        {
            foreach (var obj in objects)
            {
                Destroy(obj.Cube);
            }
        }
        objects = new List<PianoCube>();

        var asset = Resources.Load<TextAsset>($"Songs/{SongName}");
        string[] lines = asset.text.Split(new string[] { Environment.NewLine }, StringSplitOptions.RemoveEmptyEntries);
        foreach (var line in lines)
        {
            string[] split = line.Trim().Split(',');
            keysToPlay.Add(new SongNote
            {
                Octave = split[0],
                Note = split[1],
                StartTime = float.Parse(split[2]),
                EndTime = float.Parse(split[3])
            });
        }
        litKey = 0;
        keysToPlay.Sort((k1, k2) => k1.StartTime.CompareTo(k2.StartTime));
        minTime = keysToPlay.Min(k => k.StartTime);
        SetNewMaterial(keysToPlay.Where(k => k.StartTime == minTime));
        InstantiateKeys();
        startTime = Time.time;
    }

    public void ClickKey(GameObject obj)
    {
        if (litKey >= keysToPlay.Count)
        {
            return;
        }

        var foundNote = ClickedNotes.FirstOrDefault(n => string.Equals(n.Note.Note, obj.name, StringComparison.InvariantCultureIgnoreCase) &&
            string.Equals(n.Note.Octave, obj.transform.parent.name, StringComparison.InvariantCultureIgnoreCase)
            && !n.Clicked);
        if (foundNote != null)
        {
            foundNote.Clicked = true;
        }
        if (ClickedNotes.All(n => n.Clicked))
        {
            SetOriginalMaterial(ClickedNotes.Select(n => n.Note));
            litKey += ClickedNotes.Count;
            if (litKey >= keysToPlay.Count)
            {
                JumpKey();
                return;
            }
            minTime = keysToPlay.Where(k => k.StartTime > minTime).Min(k => k.StartTime);
            JumpKey();


            SetNewMaterial(keysToPlay.Where(k => k.StartTime == minTime));
        }
    }

    void JumpKey()
    {
        float gap = ClickedNotes.FirstOrDefault()?.Note.StartTime ?? 0;
        foreach (var n in ClickedNotes)
        {
            var matchingObjectIndex = objects.FindIndex(o => o.Note == n.Note);
            Destroy(objects[matchingObjectIndex].Cube);
            objects.RemoveAt(matchingObjectIndex);
        }

        foreach (var obj in objects)
        {
            float x = GetCubeXPosition(obj);
            obj.Cube.transform.localPosition = new Vector3(x, distance, -keyFactor*(obj.Note.StartTime - minTime + (0.5f * obj.Note.Length)));
            obj.Position = obj.Cube.transform.localPosition;
        }
        startTime = Time.time;
    }

    void Update()
    {
        if (!objects.Any())
        {
            return;
        }

        var keyLength = objects.FirstOrDefault().Length;
        var journeyLength = keyLength * keyFactor;
        float distCovered = (Time.time - startTime) * speed;
        float fractionOfJourney = distCovered / journeyLength;

        foreach (var obj in objects)
        {
            obj.Cube.transform.localPosition = Vector3.Lerp(obj.Position, obj.Position + new Vector3(0, 0, journeyLength), fractionOfJourney);
            if (obj.Note.StartTime == minTime && fractionOfJourney > 1)
            {
                float x = GetCubeXPosition(obj);
                obj.Cube.GetComponent<MeshRenderer>().material.color = Color.yellow;
                obj.Cube.transform.localPosition = new Vector3(x, 0.25f, -obj.Length * 0.5f);
            }
        }
    }

    float GetCubeXPosition(PianoCube obj)
    {
        return obj.Note.Note.Equals("f", StringComparison.InvariantCultureIgnoreCase) ? 0.04f : 0;
    }

    void InstantiateKeys()
    {
        foreach (var key in keysToPlay)
        {
            var go = GetPianoKeyGO(key);
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            cube.GetComponent<MeshRenderer>().material.color = Color.cyan;
            cube.transform.parent = go.transform.parent;
            var length = key.Length * keyFactor;
            cube.transform.localScale = new Vector3(width, length, depth);
            FixFKey(cube,key);
            objects.Add(new PianoCube
            {
                Cube = cube,
                Length = length,
                Position = cube.transform.localPosition,
                Note = key
            });
        }
    }

    void FixFKey(GameObject cube, SongNote key)
    {
        float x = key.Note.Equals("f", StringComparison.InvariantCultureIgnoreCase)? 0.04f : 0;
        cube.transform.localPosition = new Vector3(x, distance, -(key.StartTime * keyFactor + (0.5f * key.Length*keyFactor)));
    }


    GameObject GetPianoKeyGO(SongNote currentKey)
    {
        return GameObject.Find($"{currentKey.Octave}/{currentKey.Note}/MovingKey");
    }

    void SetOriginalMaterial(IEnumerable<SongNote> keys)
    {
        foreach (var key in keys)
        {
            var go = GetPianoKeyGO(key);
            if(key.OriginlalMaterial != null){
                go.GetComponent<MeshRenderer>().material = key.OriginlalMaterial;
            }
            if(key.OriginaTheme != null) {
                var interactable = go.transform.parent.GetComponent<Interactable>();
                interactable.Profiles[0].Themes[0] = key.OriginaTheme;
                interactable.RefreshSetup();
            }
        }
    }

    void SetNewMaterial(IEnumerable<SongNote> keys)
    {
        foreach (var key in keys)
        {
            var go = GetPianoKeyGO(key);
            key.OriginlalMaterial = go.GetComponent<MeshRenderer>().material;
            go.GetComponent<MeshRenderer>().material = DefaultMaterial;
            var interactable = go.transform.parent.GetComponent<Interactable>();
            key.OriginaTheme = interactable.Profiles[0].Themes[0];
            var theme = Resources.Load<Theme>($"{interactable.Profiles[0].Themes[0].name}Click");
            interactable.Profiles[0].Themes[0] = theme;
            interactable.RefreshSetup();
        }

        ClickedNotes = keys.Select(k => new ClickedNote
        {
            Note = k,
            Clicked = false
        }).ToList();
    }


    class ClickedNote
    {
        public SongNote Note { get; set; }
        public bool Clicked { get; set; }
    }

    class PianoCube
    {
        public GameObject Cube;
        public float Length;
        public Vector3 Position;
        public SongNote Note;
    }

    class SongNote
    {
        public string Octave { get; set; }
        public string Note { get; set; }
        public float StartTime { get; set; }
        public float EndTime { get; set; }
        public float Length { get { return EndTime - StartTime; } }
        public Theme OriginaTheme { get; set; }
        public Material OriginlalMaterial {get;set;}
    }
}