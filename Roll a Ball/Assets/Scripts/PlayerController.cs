using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class PlayerController : MonoBehaviour
{
    private Rigidbody rb;
    public float speed;
    private int count;

    public Text countText;
    public Text winText;

    void updateCount()
    {
        countText.text = "Count: " + count.ToString();
        winText.text = "";
    }

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        count = 0;
        updateCount();
    }

    void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);

        rb.AddForce(movement * speed);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Pick Up"))
        {
            other.gameObject.SetActive(false);
            count++;
            updateCount();
            if (count == 23) winText.text = "Você é um Vencedor";
        }
    }
}
