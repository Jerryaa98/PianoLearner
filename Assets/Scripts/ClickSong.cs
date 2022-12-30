using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class ClickSong : MonoBehaviour
{
    List<(string, string, float, float)> keysToPlay;

    public Material ColorMaterial;
    private Material originalMaterial;
    private int litKey = 0;

    public string SongName;

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
        keysToPlay = new List<(string, string, float, float)>();
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
            keysToPlay.Add((split[0], split[1], float.Parse(split[2]), float.Parse(split[3])));
        }
        litKey = 0;
        var currentKey = keysToPlay[litKey];
        SetNewMaterial(currentKey);
        InstantiateKeys();
        startTime = Time.time;
    }

    public void ClickKey(GameObject obj)
    {
        if (litKey >= keysToPlay.Count)
        {
            return;
        }

        var currentKey = keysToPlay[litKey];
        if (string.Equals(currentKey.Item2, obj.name, StringComparison.InvariantCultureIgnoreCase) &&
            string.Equals(currentKey.Item1, obj.transform.parent.name, StringComparison.InvariantCultureIgnoreCase))
        {
            SetOriginalMaterial(currentKey);
            JumpKey();

            litKey++;
            if (litKey >= keysToPlay.Count)
            {
                return;
            }
            currentKey = keysToPlay[litKey];
            SetNewMaterial(currentKey);
        }
    }

    GameObject GetPianoKeyGO((string, string, float, float) currentKey)
    {
        return GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey");
    }

    void SetOriginalMaterial((string, string, float, float) currentKey)
    {
        // var theme = GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").transform.parent.GetComponent<Interactable>().ActiveThemes[0];
        // theme.StateProperties.FirstOrDefault(sp => sp.Name.Equals("color", StringComparison.CurrentCultureIgnoreCase)).Values.FirstOrDefault(v => v.Name.Equals("default", StringComparison.CurrentCultureIgnoreCase)).Color = originalColor;
        GetPianoKeyGO(currentKey).GetComponent<MeshRenderer>().material = originalMaterial;
    }

    void SetNewMaterial((string, string, float, float) currentKey)
    {
        // var theme = GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").transform.parent.GetComponent<Interactable>().ActiveThemes[0];
        // originalColor = theme.StateProperties.FirstOrDefault(sp => sp.Name.Equals("color", StringComparison.CurrentCultureIgnoreCase)).Values.FirstOrDefault(v => v.Name.Equals("default", StringComparison.CurrentCultureIgnoreCase)).Color;
        // theme.StateProperties.FirstOrDefault(sp => sp.Name.Equals("color", StringComparison.CurrentCultureIgnoreCase)).Values.FirstOrDefault(v => v.Name.Equals("default", StringComparison.CurrentCultureIgnoreCase)).Color = newColor;
        originalMaterial = GetPianoKeyGO(currentKey).GetComponent<MeshRenderer>().material;
        GetPianoKeyGO(currentKey).GetComponent<MeshRenderer>().material = ColorMaterial;
    }

    List<PianoCube> objects = new List<PianoCube>();

    class PianoCube
    {
        public GameObject Cube;
        public float Length;
        public Vector3 Position;
    }

    void JumpKey()
    {
        var goLength = objects.FirstOrDefault().Position;
        Destroy(objects[0].Cube);
        objects.RemoveAt(0);
        float lastPosition = 0f;
        var distance = 0.25f;
        foreach (var obj in objects)
        {
            obj.Cube.transform.localPosition = new Vector3(0f, distance, (-obj.Length * 0.5f) - lastPosition);
            lastPosition += obj.Length;
            obj.Position = obj.Cube.transform.localPosition;
        }
        startTime = Time.time;
    }

    float startTime;
    float speed = 0.5f;

    void Update()
    {
        if (!objects.Any())
        {
            return;
        }

        var keyLength = objects.FirstOrDefault().Length;
        var journeyLength = keyLength;
        float distCovered = (Time.time - startTime) * speed;
        float fractionOfJourney = distCovered / journeyLength;

        foreach (var obj in objects)
        {
            obj.Cube.transform.localPosition = Vector3.Lerp(obj.Position, obj.Position + new Vector3(0, 0, journeyLength), fractionOfJourney);
            if (obj == objects.First())
            {
                if (fractionOfJourney > 1)
                {
                    obj.Cube.GetComponent<MeshRenderer>().material.color = Color.yellow;
                    obj.Cube.transform.localPosition = new Vector3(0, 0.25f, -obj.Length * 0.5f);
                }
            }
        }
    }

    void InstantiateKeys()
    {
        float lastPosition = 0f;
        var width = 0.02f;
        var depth = 0.02f;
        var distance = 0.25f;
        foreach (var key in keysToPlay)
        {
            var go = GetPianoKeyGO(key);
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            cube.GetComponent<MeshRenderer>().material.color = Color.cyan;
            cube.transform.parent = go.transform.parent;
            var length = (key.Item4 - key.Item3) * 0.06f;
            cube.transform.localScale = new Vector3(width, length, depth);
            cube.transform.localPosition = new Vector3(0, distance, (-length * 0.5f) - lastPosition);
            lastPosition += length;
            objects.Add(new PianoCube
            {
                Cube = cube,
                Length = length,
                Position = cube.transform.localPosition
            });
        }
    }
}