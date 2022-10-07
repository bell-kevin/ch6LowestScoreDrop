// ch6LowestScoreDrop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
void getScore(int &score);
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
		int lowScore = findLowest(score1, score2, score3, score4, score5);
		cout << "Lowest score being dropped: " << lowestScore << endl;
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
int findLowest(int score1, int score2, int score3, int score4, int score5) {
	int lowScore=1111;
	if (score1 < score2) {
		lowScore = score1;
	}
	if (score2 < score3) {
		lowScore = score2;
	}
	if (score3 < score4) {
		lowScore = score3;
	}
	if (score4 < score5) {
		lowScore = score4;
	} // end if condition
	return lowScore;
} // end findLowest
