using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResizingScript : MonoBehaviour
{
    public GameObject piano;
    Vector3 scaleChange = new Vector3(0.1f, 0.1f, 0.1f);

    public void SizeUp(){
        piano.transform.localScale += scaleChange;
    }

    public void SizeDown(){
        piano.transform.localScale -= scaleChange;
    }
}
