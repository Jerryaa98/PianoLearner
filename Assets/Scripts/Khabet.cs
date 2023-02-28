using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine.Events;
using UnityEngine.Serialization;


public class Khabet : MonoBehaviour
{
    public GameObject currentObject;
    public UnityEvent buttonTouched = new UnityEvent();

    private void OnCollisionEnter(Collision other)
    { 
        if(other.gameObject.name == "Left ThumbTip" ||
           other.gameObject.name == "Left IndexTip" ||
           other.gameObject.name == "Left MiddleTip" ||
           other.gameObject.name == "Left RingTip" ||
           other.gameObject.name == "Left PinkyTip" ||
           other.gameObject.name == "Right ThumbTip" ||
           other.gameObject.name == "Right ThumbTip" ||
           other.gameObject.name == "Right ThumbTip" ||
           other.gameObject.name == "Right ThumbTip" ||
           other.gameObject.name == "Right ThumbTip"){

            // Debug.Log($"Object Being hit: {currentObject} Hit by: {other.gameObject.name} {Time.time}" );
            buttonTouched.Invoke();
            GameObject moveKey = currentObject.transform.GetChild(0).gameObject;
            Vector3 p = moveKey.transform.localPosition;
            p.z = 0.0222f;
            moveKey.transform.localPosition = p;
        } 
    }
}
