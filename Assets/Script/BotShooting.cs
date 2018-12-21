using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotShooting : MonoBehaviour {

    public AudioSource audio;
    public AudioSource robotDestroyAudio;
    public Rigidbody Bot;
    public GameObject bulletPrefab;
    public Transform bulletSpawn;
    private int playerLife = 3;
    private int speed = 10;
    private bool isDead = false;

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (playerLife <= 0&& !isDead)
        {
            Bot.transform.localScale = Vector3.zero;
            Destroy(Bot);
            robotDestroyAudio.Play();
            isDead = true;
        }
        else
        {
            Vector3 pos = Bot.position;
            if (Random.RandomRange(0, 20) == 9)
            {
                Fire();
            }
            if (Random.RandomRange(0, 50) == 15)
            {
                Bot.AddForce(0, 20, 0);
            }
            else if (Random.RandomRange(0, 10) == 4)
            {
                Bot.AddForce(50, 0, 0);

            }
            if (Random.RandomRange(0, 10) == 3)
            {
                Bot.AddForce(-50, 0, 0);
            }
            if (Random.RandomRange(0, 10) == 2)
            {
                Bot.AddForce(0, 0, 50);
            }
            if (Random.RandomRange(0, 10) == 1)
            {
                Bot.AddForce(0, 0, -50);
            }

            Bot.transform.rotation = Quaternion.Euler(0, 0, 0);
            var x = Input.GetAxis("Horizontal") * Time.deltaTime * 300.0f;
            var z = Input.GetAxis("Vertical") * Time.deltaTime * 5.0f;

            bulletPrefab.transform.Rotate(0, x, 0);
            bulletPrefab.transform.Translate(0, 0, z);
        }
    }

    void Fire()
    {
        audio.Play();
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
        if (collision.collider.tag == "Bullet_Player")
        {
            playerLife--;
        }
    }
}
