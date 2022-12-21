using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class guideSong : MonoBehaviour
{

    List<(string, string, double, double)> keysToPlay = new List<(string, string, double, double)>
    {
        ("Medium", "C", 0.20, 0.50),
        ("Medium", "C", 0.65, 1.00),
        ("Medium", "E", 1.05, 1.40),
        ("Low", "D", 1.45, 1.60)
    };

    public Material ColorMaterial;
    private Material originalMaterial;
    private bool isLit = false;
    private (string, string, double, double) litKey;

    private float startTime = 10;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        PlaySong();
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
