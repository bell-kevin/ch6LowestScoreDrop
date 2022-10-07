// ch6LowestScoreDrop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Ch 6 Lowest Score Drop by Kevin Bell\n\n";
    string response = "y";
    double score;
    while (response == "y") {
        cout << "Enter five test scores. I will drop the lowest one and average the other four.\n\n";
        cout << "Enter a test score between 0 and 100: ";
        cin >> score;
        if (score <0 || score>100) {
            cout << "Error. Enter a test score between 0 and 100: ";
        }
    }
}