// ch6LowestScoreDrop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Ch 6 Lowest Score Drop by Kevin Bell\n\n";
    string response = "y";
    double score, lowestScore=1000, average=0;
    while (response == "y") {
        cout << "Enter five test scores. I will drop the lowest one and average the other four.\n\n";
        for (int i = 0; i < 5; i++) {
            cout << "Enter a test score between 0 and 100: ";
            cin >> score;
            if (score < 0 || score>100) {
                cout << "Error. Enter a test score between 0 and 100: ";
                cin >> score;
            } // end if condition
        } // end for loop
        cout << "Lowest score being dropped: " << lowestScore << endl;
        cout << "After dropping lowest score, test average is " << average << endl << endl;
        cout << "Do you want to enter more scores? (y/n) ";
        cin >> response;
	} // end while loop
    //Keep window open til done
    system("pause");
    return 0;
} // end main
