using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreManager : MonoBehaviour
{
    public static int score;
	public Text levelText;
	public EnemyManager enemyManager;

    private Text text;
	private int currentLevel = 1;
	private int scoreToNextLevel = 200;

    void Awake ()
    {
        text = GetComponent <Text> ();
        score = 0;
		UpdateLevelText ();
    }

    void FixedUpdate ()
    {
        text.text = "Score: " + score;
		if (ShouldUpdateLevel ()) 
		{
			currentLevel++;
			scoreToNextLevel = scoreToNextLevel * 2;
			enemyManager.enemy.GetComponent<EnemyHealth> ().UpdateEnemyHealth (currentLevel);
			UpdateLevelText ();
		}
    }

	private bool ShouldUpdateLevel () 
	{
		return score >= scoreToNextLevel;
	}

	private void UpdateLevelText() 
	{
		levelText.text = "Level: " + currentLevel;
	}
}
