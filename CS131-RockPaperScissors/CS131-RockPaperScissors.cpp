#include <iostream>

using namespace std;

/*
Program Specifications Write a program to play an automated game of Rock, Paper, Scissors. 
Two players make one of three hand signals at the same time. 
Hand signals represent a rock, a piece of paper, or a pair of scissors. 
Each combination results in a win for one of the players. 
Rock crushes scissors, paper covers rock, and scissors cut paper. 
A tie occurs if both players make the same signal. 
Use a random number generator of 0, 1, or 2 to represent the three signals.

Note: this program is designed for incremental development. 
Complete each step and submit for grading before starting the next step. 
Only a portion of tests pass after each step but confirm progress.
*/

int main()
{
    /*
    Step 0. Read starter template and do not change the provided code. 
    Integer constants are defined for ROCK, PAPER, and SCISSORS. 
    A Random object is created and a seed is read from input and passed to the Random object. 
    This supports automated testing and creates predictable results that would otherwise be random.
    */
    
    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    int seed;
    cin >> seed;
    srand(seed);

    // End program sequence
    cout << endl << endl;
#ifdef _WIN32
    system("pause");
#else
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
    return 0;
}