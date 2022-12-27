using System;
using System.Collections.Generic;
using UnityEngine;

public class ClickGuideSong : MonoBehaviour
{
    List<(string, string, double, double)> keysToPlay;

    private static Color chosenColor = Color.blue;
    private Color originalColor;
    public Material chosenMaterial;
    private Material originalMaterial;
    private int litKey = 0;

    public string SongName;

    // Start is called before the first frame update
    void Start()
    {
        //StartSong();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetSongAndStart(string songName)
    {

        SongName = songName;
        StartSong();
    }

    private void SetColor((string, string, double, double) currentKey, bool reset)
    {
        if(reset)
        {
            GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").GetComponent<MeshRenderer>().material = originalMaterial;
            //GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").GetComponent<MeshRenderer>().material.SetColor("_Color", originalColor);
        } 
        else
        {
            GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").GetComponent<MeshRenderer>().material = chosenMaterial;
            //GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").GetComponent<MeshRenderer>().material.SetColor("_Color", chosenColor);
        }
    }
    private void SaveColor((string, string, double, double) currentKey)
    {
        originalMaterial = GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").GetComponent<MeshRenderer>().material;
        //originalColor = GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKey").GetComponent<MeshRenderer>().material.color;
    }

    public void StartSong()
    {
        keysToPlay = new List<(string, string, double, double)>();

        Debug.Log(SongName);
        var asset = Resources.Load<TextAsset>($"Songs/{SongName}");
        string[] lines = asset.text.Split(new string[] { Environment.NewLine }, StringSplitOptions.RemoveEmptyEntries);
        foreach (var line in lines)
        {
            string[] split = line.Trim().Split(',');
            keysToPlay.Add((split[0], split[1], double.Parse(split[2]), double.Parse(split[3])));
        }
        litKey = 0;
        var currentKey = keysToPlay[litKey];
        SaveColor(currentKey);
        SetColor(currentKey, false);
    }

    public void  ClickKey(GameObject obj)
    {
        if(litKey >= keysToPlay.Count)
        {
            return;
        }
        var currentKey = keysToPlay[litKey];
        if(string.Equals(currentKey.Item2, obj.name, StringComparison.InvariantCultureIgnoreCase) &&
            string.Equals(currentKey.Item1, obj.transform.parent.name, StringComparison.InvariantCultureIgnoreCase))
        {
            SetColor(currentKey, true);

            litKey++;
            if (litKey >= keysToPlay.Count)
            {
                return;
            }
            currentKey = keysToPlay[litKey];

            SaveColor(currentKey);
            SetColor(currentKey, false);
        }
    }
}
