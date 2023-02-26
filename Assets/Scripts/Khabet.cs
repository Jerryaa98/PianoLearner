using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Khabet : MonoBehaviour
{
    private void OnCollisionEnter(Collision other)
    {
        Debug.Log($"Hit by: {other.gameObject.name} {Time.time}" );
    }
}
