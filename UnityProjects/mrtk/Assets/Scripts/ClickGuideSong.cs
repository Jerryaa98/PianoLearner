using System;
using System.Collections.Generic;
using UnityEngine;

public class ClickGuideSong : MonoBehaviour
{
    List<(string, string, double, double)> keysToPlay;

    public Material ColorMaterial;
    private Material originalMaterial;
    private int litKey = 0;
    public string newLitKey = "";

    public string SongName;

    // Start is called before the first frame update
    void Start()
    {
        keysToPlay = new List<(string, string, double, double)>();

        var asset = Resources.Load<TextAsset>($"Songs/{SongName}");
        string[] lines = asset.text.Split(new string[] { Environment.NewLine }, StringSplitOptions.RemoveEmptyEntries);
        foreach (var line in lines)
        {
            string[] split = line.Trim().Split(',');
            keysToPlay.Add((split[0], split[1], double.Parse(split[2]), double.Parse(split[3])));
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(!string.IsNullOrWhiteSpace(newLitKey))
        {
            string[] split = newLitKey.Split(',');
            if(split.Length == 2)
            {
                var currentKey = keysToPlay[litKey];
                if(string.Equals(currentKey.Item1, split[0], StringComparison.InvariantCultureIgnoreCase) &&
                    string.Equals(currentKey.Item2, split[1], StringComparison.InvariantCultureIgnoreCase))
                {
                    GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKeyTransform/MovingKeyGeometry").GetComponent<MeshRenderer>().material = originalMaterial;

                    litKey++;
                    if (litKey >= keysToPlay.Count)
                    {
                        return;
                    }
                    currentKey = keysToPlay[litKey];
                    originalMaterial = GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKeyTransform/MovingKeyGeometry").GetComponent<MeshRenderer>().material;
                    GameObject.Find($"{currentKey.Item1}/{currentKey.Item2}/MovingKeyTransform/MovingKeyGeometry").GetComponent<MeshRenderer>().material = ColorMaterial;
                    newLitKey = "";
                }
            }
        }
    }
}
