/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on February 2, 2014, 9:46 PM
 * Purpose: Create a game project using C++
 * Game Type: Tic Tac Toe V2
 * Added feature: Read from and Save to files, 2d arrays, function prototypes,
 *                pass by references.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=3;

//Function Prototype
void welcome();
int read1();
int read2 ();
void announce(unsigned short &,unsigned short &);
void write1(int);
void write2(int);
void dispBrd(char[][COLS],int);
char turnChk(int,char,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short xwin, owin;//win counter for x and o
    char ans;
    do{
        //Declare Variables
        unsigned short player = 1, turn = 1;//initialize the game
        bool gameover = false, gamewin = false;
        char move;
        //char type for the hidden game board
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
        //welcome message
        welcome();
        //read from data file
        xwin = read1();
        owin = read2();
        //announce the winning since the game was created
        announce(xwin,owin);
        //initialize the game 
        char board[3][3] = {{'7','8','9'},
                            {'4','5','6'},
                            {'1','2','3'}};
        
        do{
            
            dispBrd(board,3);//display the board using a 2d array
            
            turn++;//increment the turn to start the game
            
            sign = turnChk(turn,sign,player);
            if (sign == 'X'){
                player=1;
            }else player=2;
        
            //Player inputs moves
            cout<<endl;
            cin>>move;
    
        //check if the move is valid
        if(move == '1' && a == '1') {
                a = sign;
                board[2][0] = sign;
        }else if(move == '2' && b == '2') {
                b = sign;
                board[2][1] = sign;
        }else if(move == '3' && c == '3') {
                c = sign;
                board[2][2] = sign;
        }else if(move == '4' && d == '4') {
                d = sign;
                board[1][0] = sign;
        }else if(move == '5' && e == '5') {
                e = sign;
                board[1][1] = sign;
        }else if(move == '6' && f == '6') {
                f = sign;
                board[1][2] = sign;
        }else if(move == '7' && g == '7') {
                g = sign;
                board[0][0] = sign;
        }else if(move == '8' && h == '8') {
                h = sign;
                board[0][1] = sign;
        }else if(move == '9' && i == '9') {
                i = sign;
                board[0][2] = sign;
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
        
        //end the game if a player won and display result
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
                     write1(xwin);
                 }
                 if(player == 2){ 
                     owin++;
                     write2(owin);
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
  
            }while(gameover == false);//loop the game until game is over
            //keep track of winnings
            
            xwin = read1();//read from xwin.dat
            owin = read2();//read from owin.dat
            announce(xwin,owin);
            
            cout<<"Do you want to repeat?"<<endl;//ask for repeat
            cin>>ans;//get answer
    }while(ans == 'Y'||ans == 'y');
    
    //Exit stage right
        return 0;
}

void dispBrd(char array[][COLS],int size){
    
    for (int x=0; x<size; x++)
    {
        cout<<endl;
        for (int y=0;y<size;y++)
        {
            cout<<setw(2)<<array[x][y]<<setw(2);//draw the grid
            cout<<setw(2);
        }
        cout<<endl;
    }
    cout<<endl;
}

char turnChk(int turn,char sign,int player){
    
        if(turn%2 == 0) {//if the turn is multiples of 2,then it'll be player 1's turn.
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
        return sign;  //return sign to be used to determine move's validity
}

int read1(){
    //Declare variables
    ifstream input;
    int num;
    //open the file
    input.open("Xwin.dat");
    //Read the data
    input>>num;
    //close the file
    input.close();
    //exit
    return num;  
}

int read2(){
    //Declare variables
    ifstream input;
    int num;
    //open the file
    input.open("Owin.dat");
    //Read the data
    input>>num;
    //close the file
    input.close();
    //exit
    return num;  
}

void write1(int xwin){
    ofstream Xwin;
    //open the file
    Xwin.open ("Xwin.dat",ios::out);
    //record the data
    Xwin<<xwin;
    //close the file
    Xwin.close();        
}

void write2(int owin){
    ofstream Owin;
    //open the file
    Owin.open ("Owin.dat",ios::out);
    //record the data
    Owin<<owin;
    //close the file
    Owin.close();        
}

void announce(unsigned short &xwin ,unsigned short &owin){

    cout<<"Player 1 has won "<<xwin<<" times since the game was created."<<endl;
    cout<<"Player 2 has won "<<owin<<" times since the game was created."<<endl;

}

void welcome(){
    cout<<"This program is created to demonstrate a game called Tic Tac Toe."<<endl;
    cout<<endl;
    cout<<"I trust you knew how to play this already."<<endl;
    cout<<"If not I feel very sorry for you. Just kidding!"<<endl;
    cout<<"Let's play!!"<<endl;
    cout<<endl;
    cout<<"Player 1 will start with X."<<endl;
    
}