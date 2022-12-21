using Microsoft.MixedReality.Toolkit;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PianoKeyPress : MRTKBaseInteractable
{
    protected override void OnSelectEntered(SelectEnterEventArgs args)
    {
        string currentKey = $"{transform.parent.name},{gameObject.name}";
        Debug.Log(currentKey);
        transform.parent.parent.GetComponent<ClickGuideSong>().newLitKey = currentKey;
    }
}
