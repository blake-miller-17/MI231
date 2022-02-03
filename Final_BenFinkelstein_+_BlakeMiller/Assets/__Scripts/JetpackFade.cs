using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class JetpackFade : MonoBehaviour
{
    private Image barImage;
    //public GameObject player;
    public Player player;

    private void Awake()
    {

        barImage = transform.Find("Fade").GetComponent<Image>();
    }

    private void Start()
    {
        //Debug.Log(player.jetpackFuel);
        SetFuel(player.GetFuelNormalized());
    }

    void Update()
    {
        SetFuel(player.GetFuelNormalized());
    }

    private void SetFuel(float fuelNormalized)
    {
        barImage.fillAmount = fuelNormalized;
    }
}
