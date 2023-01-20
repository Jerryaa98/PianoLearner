using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;
 
public class FPSDisplay : MonoBehaviour
{
    public int avgFrameRate;
    public TextMeshPro display_Text;
 
    public void Update ()
    {
        float current = 0;
        current = (int)(1f / Time.unscaledDeltaTime);
        avgFrameRate = (int)current;
        display_Text.text = $"{avgFrameRate} FPS";
    }
}