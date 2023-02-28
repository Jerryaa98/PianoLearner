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
           other.gameObject.name == "Right IndexTip" ||
           other.gameObject.name == "Right MiddleTip" ||
           other.gameObject.name == "Right RingTip" ||
           other.gameObject.name == "Right PinkyTip"){

            // Debug.Log($"Object Being hit: {currentObject} Hit by: {other.gameObject.name} {Time.time}" );
            buttonTouched.Invoke();
            GameObject moveKey = currentObject.transform.GetChild(0).gameObject;
            Vector3 p = moveKey.transform.localPosition;
            p.z = 0.0222f;
            moveKey.transform.localPosition = p;
        } 
    }

    private void OnCollisionExit(Collision other)
    {
        // Debug.Log("No longer in contact with " + other.transform.name);
        GameObject moveKey = currentObject.transform.GetChild(0).gameObject;
        Vector3 p = moveKey.transform.localPosition;
        p.z = 0f;
        moveKey.transform.localPosition = p;
    }
}
