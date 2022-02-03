using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerShip : MonoBehaviour
{

    [Header("Inscribed")]
    public float speed = 10;
    public GameObject bulletPrefab;
    public float bulletSpeed = 20;

    [Header("Dynamic")]
    public Vector3 vel;

    Rigidbody rigid;
    private bool gameAlreadyWon = false;
    void Start()
    {
        rigid = GetComponent<Rigidbody>();
    }

    void Update()
    {
        // Get the mouse position on screen
        Vector3 mousePosScreen = Input.mousePosition;
        mousePosScreen.z = -Camera.main.transform.position.z; //This is just equal to 10

        // Translate the mouse position to world coordinates
        Vector3 mousePos3d = Camera.main.ScreenToWorldPoint(mousePosScreen);
        Debug.DrawLine(transform.position, mousePos3d, Color.white);

        // See if the player clicked the mouse
        if (Input.GetMouseButtonDown(0)) {
            // If they did click the mouse, then fire
            // Intantiate a bullet
            GameObject bullGO = Instantiate<GameObject>( bulletPrefab);
            //Set it to the same position as the ship
            bullGO.transform.position = transform.position;
            // Set the velocity on that bullet
            Vector3 deltaToMouse = mousePos3d - transform.position;
            deltaToMouse.Normalize();
            deltaToMouse *= bulletSpeed;
            bullGO.GetComponent<Rigidbody>().velocity = deltaToMouse;
        }

        if ( !gameAlreadyWon && Asteroid.ASTEROIDS.Count == 0)
        {
            Invoke( "RestartLevel", 2);
            gameAlreadyWon = true;
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        // Pulls input from the InputManager Axes
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");
        //Debug.Log("H:" + h + "\tV:" + v);

        vel = new Vector3(h, v, 0);
        if (vel.magnitude > 1){
            vel.Normalize();
        }
        vel *= speed;

        rigid.velocity = vel;
        
    }

    void OnCollisionEnter( Collision coll)
    {
        // Did we hit an Asteroid
        if (coll.gameObject.GetComponent<Asteroid>() != null )
        {
            //This ship is being destroyed
            Invoke("RestartLevel", 2 );
            gameObject.SetActive( false );

        }
    }

    void RestartLevel()
    {
        SceneManager.LoadScene("_Scene_0");
    }
}
