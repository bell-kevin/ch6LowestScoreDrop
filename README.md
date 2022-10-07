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

![1](https://github.com/bell-kevin/ch6LowestScoreDrop/blob/main/dropLowScore.PNG)

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
