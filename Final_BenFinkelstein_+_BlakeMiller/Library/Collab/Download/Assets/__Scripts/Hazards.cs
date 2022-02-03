using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Hazards : MonoBehaviour
{
   void OnTriggerEnter2D(Collider2D collision)
    {
        SceneManager.LoadScene("YOU LOSE");
    }
}
