// ch6LowestScoreDrop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void getScore();
void calcAverage();
int findLowest();
double score, lowestScore = 1000, average = 0;
int main()
{
    cout << "Ch 6 Lowest Score Drop by Kevin Bell\n\n";
    string response = "y";
	while (response == "y" || response == "Y" || response == "Yes" || response == "YES" || response == "yes") {
        cout << "Enter five test scores. I will drop the lowest one and average the other four.\n\n";
        for (int i = 0; i < 6; i++) {
			getScore();
        } // end for loop
		lowestScore = findLowest();
        cout << "Lowest score being dropped: " << lowestScore << endl;
		calcAverage();
        cout << "After dropping lowest score, test average is " << average << endl << endl;
        cout << "Do you want to enter more scores? (y/n) ";
        cin >> response;
	} // end while loop
    //Keep window open til done
    system("pause");
    return 0;
} // end main

void getScore() {
	double score;
	cout << "Enter a test score between 0 and 100: ";
	cin >> score;
	if (score < 0 || score>100) {
		cout << "Error. Enter a test score between 0 and 100: ";
		cin >> score;
	} // end if condition
} // end getScore

void calcAverage() {
	average = (score + score + score + score+score) / 5;
} // end calcAverage

int findLowest() {
	if (score < lowestScore) {
		lowestScore = score;
	} // end if condition
	return lowestScore;
} // end findLowest
