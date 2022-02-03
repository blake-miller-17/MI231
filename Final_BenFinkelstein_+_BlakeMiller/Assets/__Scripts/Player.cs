using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Player : MonoBehaviour
{
    static private Player S;

    public Text healthText;
    
    [Header("Inscribed")]
    public int MaxSpeed = 10;
    public float speed = 10;
    public float jumpVel = 20;
    public float jumpHeldAcc = 4;
    public float groundedRayWidth = .5f;
    public float groundedRayDepth = 0.0625f;
    public LayerMask groundLayers;
    public float movementAccleration = .05f;
    public float jetpackFuelMax;
    public float jetpackFuel = 10f;
    public float jetpackRefuelMax = 2.0f;
    public float airMovement = 2.5f;
    public int maxHealth = 3;
    public Transform jetPackAnchor;
    //public GameObject jetpack;

    [Header("Dynamic")]
    public bool grounded = false;

    GameObject jp;

    [SerializeField]
    [Range(0, 3)]
    private int _health;
    public int health
    {
        get { return _health; }
        set { _health = value; }
    }

    Rigidbody2D r2d;

    void Awake() {
        S = this;
        r2d = GetComponent<Rigidbody2D>();
        jetpackFuelMax = jetpackFuel;
        health = maxHealth;
        //jp = Instantiate(jetpack, jetPackAnchor.position, jetPackAnchor.rotation);

        jp = GameObject.Find("Jetpack");
        jp.SetActive(false);
    }

    void FixedUpdate() {
        //CheckGrounded();

        //check health and turn to string, display on UI
        healthText.text = health.ToString();

        // Movement horizontally
        float h = 0;
        if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D)) h += 1;
        if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))  h -= 1;

        //movement vertically
        Vector2 vel = r2d.velocity;
        decimal decimalY = (decimal)vel.y;
        decimalY = System.Math.Round(decimalY, 3);
        vel.y = (float)decimalY;
        if (Input.GetKey(KeyCode.Space) && jetpackFuel > 0.0)
        {
            jp.SetActive(true);
            //Debug.Log("This should show the jetpack");
            if (jetpackFuel <= 0.0f)
            {

                //Debug.Log("Out of fuel");
                jetpackFuel = 0.0f;
                StartCoroutine(JetpackOver());
            }

            //Debug.Log(jetpackFuel);
            jetpackFuel -= .2f;
            
            vel.y += jumpHeldAcc * -Physics2D.gravity.y * Time.fixedDeltaTime;
        } else
        {
            jp.SetActive(false);
            //Debug.Log("This should disable the jetpack");
        }
        //
        //DestroyJetPack();
        if(jetpackFuel <= jetpackFuelMax)
        {
            JetpackRefuel();
        }

        

        //if they are in the air and moving left or right
        if ((vel.y > 0 || vel.y < 0) && h == 1)
        {
            //Debug.Log("Moving right: " + h);
            vel.x = airMovement * vel.x;
        }
        else if ((vel.y > 0 || vel.y < 0) && h == -1)
        {
            //Debug.Log("moving left: " + h);
            vel.x = -airMovement * -vel.x;
        }

        //make sure its not at the top of screen with velocity 0
        //if()
        if (vel.y == 0 && vel.x > MaxSpeed)
        {
            //Debug.Log(vel.y);
            vel.x = MaxSpeed;
        } else if (vel.y == 0 &&  vel.x < -MaxSpeed)
        {
            //Debug.Log(vel.y);
            vel.x = -MaxSpeed;
        } else
        {
            vel.x += h * speed * movementAccleration;
        }

        r2d.velocity = vel;


        //Shooting 

    }

    void JetpackRefuel()
    {
        jetpackFuel += Time.fixedDeltaTime * jetpackRefuelMax;
    }


    public IEnumerator JetpackOver()
    {
        Debug.Log("Starting coroutine");
        yield return new WaitForSeconds(2);
        //Debug.Log("Should've waited 2 seconds");
        JetpackRefuel();
    }


    void CheckGrounded() {
        grounded = false;

        // Shoot raycasts down from feet.
        for (float i=-groundedRayWidth; i<=groundedRayWidth; i+= groundedRayWidth) {
            Vector2 origin = new Vector2(transform.position.x+i, transform.position.y+groundedRayDepth);
            RaycastHit2D hit = Physics2D.Raycast(
                origin,
                Vector2.down,
                groundedRayDepth*2,
                groundLayers
            );
            if (hit.collider != null) {
                grounded = true;
            }
            // Draw a Debug Ray
            Debug.DrawLine(
                origin,
                origin+(Vector2.down*groundedRayDepth*2), 
                (hit.collider != null) ? Color.green : Color.red,
                0
            );
        }
    }

    void DestroyJetPack()
    {
        Debug.Log("should be off");
        jp.SetActive(false);
    }

    void DisplayJetpack()
    {
        Debug.Log("should be on");
        jp.SetActive(true);
        
    }

    public float GetFuelNormalized()
    {
        //Debug.Log(" Normalized " + (float)jetpackFuel / jetpackFuelMax);
        return (float)jetpackFuel / jetpackFuelMax;
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        
        //Debug.Log(collision.collider.gameObject.name);
        DamageEffect dEf = collision.gameObject.GetComponent<DamageEffect>();
        if (dEf == null) return;

        health -= dEf.damage;
        //Debug.Log("health" + health);
        if (health == 0)
        {
            Destroy(gameObject);
            SceneManager.LoadScene("YOU LOSE");
        }
        //Debug.Log("Health: " + health);
        

    }

   /* void OnTriggerEnter(Collider collision)
    {
        if (collision.CompareTag("GunkBullet"))
        {
            Debug.Log("GUNKBULLET:" + collision.name);
        }
        
    }*/

    static public int HEALTH { get { return S._health; } }
}
