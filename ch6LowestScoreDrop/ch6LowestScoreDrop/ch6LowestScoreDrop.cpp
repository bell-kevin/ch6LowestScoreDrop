// ch6LowestScoreDrop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
void getScore(int &score);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
double lowestScore, average = 0;
int score1, score2, score3, score4, score5, score;
int main()
{
	cout << "Ch 6 Lowest Score Drop by Kevin Bell\n\n";
	string response = "y";
	while (response == "y" || response == "Y" || response == "Yes" || response == "YES" || response == "yes") {
		cout << "Enter five test scores. I will drop the lowest one and average the other four.\n\n";
			getScore(score1);
			getScore(score2);
			getScore(score3);
			getScore(score4);
			getScore(score5);
			calcAverage(score1, score2, score3, score4, score5);
		
		cout << "Do you want to enter more scores? (y/n) ";
		cin >> response;
	} // end while loop
	//Keep window open til done
	system("pause");
	return 0;
} // end main
void getScore(int &score) {
	cout << "Enter a test score between 0 and 100: ";
	cin >> score;
	while (score < 0 || score > 100) {
		cout << "Error. Enter a test score between 0 and 100: ";
		cin >> score;
	} // end if condition
} // end getScore

void calcAverage(int score1, int score2, int score3, int score4, int score5) {
	lowestScore = findLowest(score1, score2, score3, score4, score5);
	cout << "Lowest score being dropped: " << lowestScore << endl;
	average = (score1 + score2 + score3 + score4 + score5 - lowestScore) / 4;
	cout << "Average of the four highest scores: " << average << endl << endl;
} // end calcAverage

int findLowest(int score1, int score2, int score3, int score4, int score5) {
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		return score1;
	else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
		return score2;
	else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
		return score3;
	else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
		return score4;
	else
		return score5;
} // end findLowest
