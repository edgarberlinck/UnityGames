using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	public GameObject[] hazards;
	public Vector3 spawValues;
	public int hazardCount;
	public float spawWait;
	public float startWait;
	public float waveWait;

	public GUIText scoreText;
	public GUIText restartText;
	public GUIText gameOverText;

	private int score;
	private bool restart;
	private bool gameOver;

	void Start() {
		gameOver = false;
		restart = false;
		restartText.text = "";
		gameOverText.text = "";

		score = 0;
		UpdateScore ();
		StartCoroutine (SpawWaves ());
	}

	void Update() {
		if (restart) {
			if (Input.GetKeyDown (KeyCode.R)) {
				//Application.LoadLevel
				SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
			}
		}
	}

	IEnumerator SpawWaves () {
		yield return new WaitForSeconds (startWait);
		while (true) {
			for (int count = 0; count < hazardCount; count++) {
				GameObject hazard = hazards [Random.Range (0, hazards.Length)];
				Vector3 spawPosition = new Vector3 (Random.Range (-spawValues.x, spawValues.x), spawValues.y, spawValues.z);
				Quaternion spawRotation = Quaternion.identity;
				Instantiate (hazard, spawPosition, spawRotation);
				yield return new WaitForSeconds (spawWait);
			}
			yield return new WaitForSeconds (waveWait);

			if (gameOver) {
				restartText.text = "Press R for restart";
				restart = true;
				break;
			}
		}
	}

	public void AddScore(int newScoreValue) {
		this.score += newScoreValue;
		UpdateScore ();
	}

	public void GameOver() {
		gameOver = true;
		gameOverText.text = "Game Over";
	}

	void UpdateScore () {
		scoreText.text = "Score: " + score;
	}
}
