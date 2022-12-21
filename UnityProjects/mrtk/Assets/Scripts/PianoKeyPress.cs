using Microsoft.MixedReality.Toolkit;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PianoKeyPress : MRTKBaseInteractable
{
    protected override void OnSelectEntered(SelectEnterEventArgs args)
    {
        Debug.Log("hello world?");
        gameObject.GetComponent<Renderer>().material.color = Color.green;
    }
}
