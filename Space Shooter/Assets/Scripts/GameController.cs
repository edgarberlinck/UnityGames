using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	public GameObject hazard;
	public Vector3 spawValues;
	public int hazardCount;
	public float spawWait;
	public float startWait;
	public float waveWait;

	public GUIText scoreText;
	private int score;

	void Start() {
		score = 0;
		UpdateScore ();
		StartCoroutine (SpawWaves ());
	}

	IEnumerator SpawWaves () {
		yield return new WaitForSeconds (startWait);
		while (true) {
			for (int count = 0; count < hazardCount; count++) {
				Vector3 spawPosition = new Vector3 (Random.Range (-spawValues.x, spawValues.x), spawValues.y, spawValues.z);
				Quaternion spawRotation = Quaternion.identity;
				Instantiate (hazard, spawPosition, spawRotation);
				yield return new WaitForSeconds (spawWait);
			}
			yield return new WaitForSeconds (waveWait);
		}
	}

	public void AddScore(int newScoreValue) {
		this.score += newScoreValue;
		UpdateScore ();
	}

	void UpdateScore () {
		scoreText.text = "Score: " + score;
	}
}
