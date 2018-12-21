using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {

    public AudioSource audio;
    public AudioSource damageAudio;
    public AudioSource gameOverAudio;
    public Rigidbody Player;
    public GameObject bulletPrefab;
    public Transform bulletSpawn;
    private int playerLife = 3;

    private int speed = 10;


    // Use this for initialization
    void Start () {
		
	}

    // Update is called once per frame
    void Update()
    {
        checkLife();

        Vector3 pos = Player.position;
        if (Input.GetKeyDown("space"))
        {
            Player.AddForce(0, 250, 0);
        }
        if (Input.GetKey("w"))
        {
            if (transform.eulerAngles.y >= 85 && transform.eulerAngles.y <= 100)
            {
                pos.x += speed * Time.deltaTime;
            }
            else if (transform.eulerAngles.y >= 165 && transform.eulerAngles.y <= 190)
            {
                pos.z -= speed * Time.deltaTime;
            }
            else if (transform.eulerAngles.y >= 260 && transform.eulerAngles.y <= 280f)
            {
                pos.x -= speed * Time.deltaTime;
            }
            else
            {
                pos.z += speed * Time.deltaTime;
            }

        }
        if (Input.GetKeyDown("s"))
        {
            //transform.Rotate(0f, 180f, 0f);
        }
        if (Input.GetKey("s"))
        {
            pos.z -= speed * Time.deltaTime;
        }
        if (Input.GetKeyDown("d"))
        {
            transform.Rotate(0f, 90f, 0f);
        }
        if (Input.GetKeyDown("a"))
        {
            transform.Rotate(0f, -90f, 0f);
        }
        if (Input.GetMouseButton(0))
        {
            audio.Play();
            Fire();
        }
        var x = Input.GetAxis("Horizontal") * Time.deltaTime * 5000.0f;
        var z = Input.GetAxis("Vertical") * Time.deltaTime * 300.0f;

        bulletPrefab.transform.Rotate(0, x + 500, 0);
        bulletPrefab.transform.Translate(0, 0, z + 500);

        transform.position = pos;
    }

    void playerMovement()
    {

    }

    void checkLife()
    {
        if (playerLife <= 0)
        {
            Player.transform.localScale = Vector3.zero;
            Destroy(Player, 0.0f);
            gameOverAudio.Play();
        }
    }

    void Fire()
    {
        
        // Create the Bullet from the Bullet Prefab
        var bullet = (GameObject)Instantiate(
            bulletPrefab,
            bulletSpawn.position,
            bulletSpawn.rotation);

        // Add velocity to the bullet
        bullet.GetComponent<Rigidbody>().velocity = bullet.transform.forward * 6;

        // Destroy the bullet after 3 seconds
        Destroy(bullet, 3.0f);
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.tag == "Bullet")
        {
            playerLife--;
            damageAudio.Play();
        }
    }
}
