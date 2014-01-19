/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 *
 * Created on January 19, 2014, 7:07 AM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char player1, player2;
    //Input values
    cout << "Let's play a game of Rock Paper,and Scissors!" << endl;
    cout << "Type in R for Rock, P for Paper or S for scissors." << endl;
    cout << "Player 1 = " << endl;
    cin >> player1;
    cout << "Player 2 = " << endl;
    cin >> player2;
    //Output
    cout << "Player 1 = " << player1 << endl;
    cout << "Player 2 = " << player2 << endl;
    //Result
    if(player1 == 'R'||'r' && player2 == 'R'||'r')cout << "Nobody wins." << endl;
    else if(player1 == 'R'||'r' && player2 == 'S'||'s')cout << "Player 1 wins" << endl;
    else if(player1 == 'R'||'r' && player2 == 'P'||'p')cout << "Player 2 wins" << endl;
    else if(player1 == 'S'||'s' && player2 == 'R'||'r')cout << "Player 2 wins" << endl;
    else if(player1 == 'S'||'s' && player2 == 'P'||'p')cout << "Player 1 wins" << endl;
    else if(player1 == 'S'||'s' && player2 == 'S'||'s')cout << "Nobody wins" << endl;
    else if(player1 == 'P'||'p' && player2 == 'R'||'r')cout << "Player 1 wins" << endl;
    else if(player1 == 'P'||'p' && player2 == 'S'||'s')cout << "Player 2 wins" << endl;
    else if(player1 == 'P'||'p' && player2 == 'P'||'p')cout << "Nobody wins." << endl;
    
    return 0;
}

