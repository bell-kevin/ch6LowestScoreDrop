# ch6LowestScoreDrop

Write a program that determines the average of a group of test scores, where the lowest score in the group is dropped. Use the following functions:

void getScore() asks the user for a test score, validates that it is not less than 0 or greater than 100, in a loop that continues until the score is valid, and stores the valid result in a reference parameter variable. This function will be called in the main function 5 times, once for each score in the group.

void calcAverage() calculates the average for the 4 highest scores in the group. It will be called once from the main function, with all 5 scores passed as parameters.

int findLowest() finds and returns the lowest of the 5 scores passed to it. It will be called by calcAverage() to determine which one of the 5 scores to drop.

The main function should loop, asking the user to enter a group of 5 scores, calculating and displaying the average for that group after dropping the lowest score, then asking the user if they want to enter another group of scores. The loop stops and the program ends when the user enters "no" or "n" or the sentinel you choose for ending the loop.

Create a table of test cases BEFORE you write and run the project. Make sure to test the behavior of invalid input, extreme ranges of valid scores, as well as correct results. Run the project with 2 loops of input, and take screenshots of each result.

Here is an example of the program, showing validation of the input and the looping of the main function:

Ch 6 Lowest Score Drop

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots, the table of test cases, AND the root folder for the project.
