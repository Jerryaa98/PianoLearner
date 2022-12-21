using System;
using System.Collections.Generic;
using UnityEngine;

public class AutoGuideSong : MonoBehaviour
{

    List<(string, string, double, double)> keysToPlay;

    public Material ColorMaterial;
    private Material originalMaterial;
    private bool isLit = false;
    private (string, string, double, double) litKey;

    private float startTime = 0;

    public string SongName;

    // Start is called before the first frame update
    void Start()
    {
        keysToPlay = new List<(string, string, double, double)>();

        var asset = Resources.Load<TextAsset>($"Songs/{SongName}");
        string[] lines = asset.text.Split(new string[] { Environment.NewLine }, StringSplitOptions.RemoveEmptyEntries);
        foreach(var line in lines)
        {
            string[] split = line.Trim().Split(',');
            keysToPlay.Add((split[0], split[1], double.Parse(split[2]), double.Parse(split[3])));
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(keysToPlay != null)
        {
            PlaySong();
        }
    }

    void PlaySong()
    {
        foreach (var currentKey in keysToPlay)
        {
            if (!isLit && Time.time >= currentKey.Item3 + startTime && Time.time <= currentKey.Item4 + startTime)
            {
                originalMaterial = GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKeyTransform/MovingKeyGeometry").GetComponent<MeshRenderer>().material;
                GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKeyTransform/MovingKeyGeometry").GetComponent<MeshRenderer>().material = ColorMaterial;
                isLit = true;
                litKey = currentKey;
            }
            if (isLit && currentKey == litKey && Time.time > litKey.Item4 + startTime)
            {
                GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKeyTransform/MovingKeyGeometry").GetComponent<MeshRenderer>().material = originalMaterial;
                isLit = false;
            }
        }
    }
}
