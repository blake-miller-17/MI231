using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class SceneSwap : MonoBehaviour
{
    public void MainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }
    public void CreditScene()
    {
        SceneManager.LoadScene("Credits");
    }
    public void InstructionMenu()
    {
        SceneManager.LoadScene("HowTo");
    }
    public void GameScene()
    {
        SceneManager.LoadScene("SampleScene");
    }
}
