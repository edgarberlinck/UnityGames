﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyByContact : MonoBehaviour {

	public GameObject explosion;
	public GameObject palyerExplosion;

	void OnTriggerEnter(Collider other) {
		if (other.tag == "Boundary")
			return;
		Instantiate (explosion, transform.position, transform.rotation);
		if (other.tag == "Player") { 
			Instantiate (palyerExplosion, other.transform.position, other.transform.rotation);
		}
		Destroy (other.gameObject);
		Destroy (gameObject);
	}
}
