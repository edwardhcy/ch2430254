/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on February 2, 2014, 9:46 PM
 * Purpose: Create a game project using C++
 * Game Type: Tic Tac Toe
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants

//Function Prototype

//Execution begins here
int main(int argc, char** argv) {
    
    unsigned short xwin = 0, owin = 0, player = 1, turn = 1;//initialize the game
    bool gameover = false, gamewin = false;
    char move,ans;
    char fName[]="./Wincount.dat";
    //char type for the game board
    char a = '1';
    char b = '2';
    char c = '3';
    char d = '4';
    char e = '5';
    char f = '6';
    char g = '7';
    char h = '8';
    char i = '9';
    char sign;
    
        cout<<"This program is created to demonstrate a game called Tic Tac Toe."<<endl;
        cout<<"Let's play!!"<<endl;
        cout<<"Player 1 will start with X."<<endl;
        
        do{
                
        cout<<endl;
        cout<<endl;
        cout<<g<<" | "<<h<<" | "<<i<<endl; //arrange the board in a 3 x 3 grid
        cout<<"-----------"<<endl;
        cout<<d<<" | "<<e<<" | "<<f<<endl;
        cout<<"-----------"<<endl;
        cout<<a<<" | "<<b<<" | "<<c<<endl;
        
        turn++;//increment the turn to start the game

        if(turn%2 == 0) {//if the turn is multiples of 2,then it'll be player 1.
        sign = 'X';
        player = 1;
        
        //skip 2 lines for better visibility
        cout<<endl;
        cout<<endl;
        cout<<"Player "<<player<<"'s turn to play."<<endl;
        cout<<"Please enter the number to place your sign."<<endl;
        cout<<"You are "<<sign<<endl;//reminding the player about their sign
    }else{ 
        sign = 'O';
        player = 2;//player 2's turn
        
        //skip 2 lines for better visibility
        cout<<endl;
        cout<<endl;
        cout<<"Player "<<player<<"'s turn to play"<<endl;
        cout<<"Please enter the number to place your sign."<<endl;
        cout<<"You are "<<sign<<endl;//reminding the player about their sign
    }
    //Player inputs moves
    cout<<endl;
    cin>>move;
    
        //check if the move is valid
        if(move == '1' && a == '1') {
                a = sign;
        }else if(move == '2' && b == '2') {
                b = sign;
        }else if(move == '3' && c == '3') {
                c = sign;
        }else if(move == '4' && d == '4') {
                d = sign;
        }else if(move == '5' && e == '5') {
                e = sign;
        }else if(move == '6' && f == '6') {
                f = sign;
        }else if(move == '7' && g == '7') {
                g = sign;
        }else if(move == '8' && h == '8') {
                h = sign;
        }else if(move == '9' && i == '9') {
                i = sign;
        }else{//if not valid
        cout << "Please enter a valid move!!" << endl;
        turn--;//decrement 1 turn to compensate for invalid moves
        }
    
        //Determine win condition
        if(a == sign && b == sign && c == sign){//check if a,b,and c are in 1 line
            gamewin = true;
        }else if(d == sign && e == sign && f == sign){//check if c,e,and f are in 1 line
            gamewin = true;
        }else if(g == sign && h == sign && i == sign){//check if g,h,and i are in 1 line
            gamewin = true;
        }else if(a == sign && d == sign && g == sign){//check if a,d,and g are in 1 line
            gamewin = true;
        }else if(b == sign && e == sign && h == sign){//check if b,e,and h are in 1 line
            gamewin = true;
        }else if(c == sign && f == sign && i == sign){//check if c,f,and i are in 1 line
            gamewin = true;
        }else if(a == sign && e == sign && i == sign){//check if a,e,and i are in 1 line
            gamewin = true;
        }else if(c == sign && e == sign && g == sign){//check if c,e,and g are in 1 line
            gamewin = true;
        }else if(a != '1' && b != '2' && c != '3' && d != '4' && e != '5' &&
                 f != '6' && g != '7' && h != '8' && i != '9'){
            gamewin = false;//since it is a draw, game cannot be won
            gameover = true;//game is over
        }else gamewin = false;//loop the check winning condition until draw or one wins
        
        //end the game if a player won
        if(gamewin == true){
            cout<<endl;//skip line for better visibility
                 //show the ending placement of the game
                 cout<<g<<" | "<<h<<" | "<<i<<endl; //display the winning board
                 cout<<"-----------"<<endl;
                 cout<<d<<" | "<<e<<" | "<<f<<endl;
                 cout<<"-----------"<<endl;
                 cout<<a<<" | "<<b<<" | "<<c<<endl;
                 cout<<endl;
                 cout<<endl;
                 cout<<"Player "<<player<<" won!"<<endl;//display which player won
                 cout<<endl;
                 
                 if(player == 1){
                     xwin++;//increment the win count 
                 }
                 if(player == 2){ 
                     owin++;
                 }
                 gameover = true;  //game is over
        }else if(gameover == true && gamewin == false){//game over and no one wins
                 cout<<endl;
                 cout<<g<<" | "<<h<<" | "<<i<<endl; //display the  board
                 cout<<"-----------"<<endl;
                 cout<<d<<" | "<<e<<" | "<<f<<endl;
                 cout<<"-----------"<<endl;
                 cout<<a<<" | "<<b<<" | "<<c<<endl;
                 cout<<endl;
                 cout<<endl;
                 cout<<"Nobody wins! It's a draw!"<<endl;//show result as draw if game is over and no one won
        }
    //keep track of winnings
    cout<<"Player 1 has won "<<xwin<<" times."<<endl;
    cout<<"Player 2 has won "<<owin<<" times."<<endl;
    
            }while(gameover == false);//loop the game until game is over
        //Exit stage right
        return 0;
}
