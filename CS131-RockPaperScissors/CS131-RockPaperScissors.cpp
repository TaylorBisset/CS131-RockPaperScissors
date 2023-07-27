#include <iostream>

using namespace std;

/*
Program Specifications 
Write a program to play an automated game of Rock, Paper, Scissors. 
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

    /*
    Step 1 (2 pts). Read two player names from input (string). Read number of rounds from input. 
    Continue reading number of rounds if value is below one and provide an error message. 
    Output player names and number of rounds. 
    Submit for grading to confirm 2 tests pass.
Ex: If input is:

3 Anna Bert -3 -4 4
Sample output is:

Rounds must be > 0
Rounds must be > 0
Anna vs Bert for 4 rounds
    */

    /*
    Step 2 (2 pts). Generate random values (0 - 2) for player 1 followed by player 2 by calling rand() % 3. 
    Continue to generate random values for both players until both values do not match. 
    Output "Tie" when the values match. 
    Submit for grading to confirm 3 tests pass.
Ex: If input is:

10 Anna Bert 1
Sample output is:

Anna vs Bert for 1 rounds
Tie
Tie
    */

    /*
    Step 3 (3 pts). Identify winner for this round and output a message. 
    Rock crushes scissors, scissors cut paper, and paper covers rock. 
    Submit for grading to confirm 6 tests pass.
Ex: If input is:

39 Anna Bert 1
Sample output is:

Anna vs Bert for 1 rounds
Tie
Tie
Bert wins with scissors
    */
    
    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    string player1, player2;
    int seed, numRounds;

    cin >> seed >> player1 >> player2 >> numRounds;
    srand(seed);
    while (numRounds <= 0)
    {
        cout << "Rounds must be > 0" << endl;
        cin >> numRounds;
    }
    cout << player1 << " vs " << player2 << " for " << numRounds << " rounds" << endl;

    for (int round = 1; round <= numRounds;)
    {
        int player1Choice = rand() % 3;
        int player2Choice = rand() % 3;

        if (player1Choice == player2Choice)
        {
            cout << "Tie" << endl;
        }
        else
        {
            round++;
        }
    }

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
// https://github.com/TaylorBisset/CS131-RockPaperScissors
