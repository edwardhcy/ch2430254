/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 27, 2014, 3:14 PM
 * Savitch Chapter 5 Problem 2
 */

//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes
void time(int &current_hour,int &current_minute, int &wait_hour,int &wait_minute);
void output(int &current_hour,int &current_minute, int &wait_hour,int &wait_minute);

//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables    
    int current_hour,current_minute,wait_hour,wait_minute;
    char ans;
    do{
        time(current_hour,current_minute,wait_hour,wait_minute);
        output(current_hour,current_minute,wait_hour,wait_minute);
        
        //Ask for repetition
        cout<<"Repeat? y/n"<<endl;
        cin>>ans;
    
    }while(ans == 'Y'||ans == 'y');
    //Exit stage right
    return 0;
}

void output(int &current_hour,int &current_minute, int &wait_hour,int &wait_minute){
    current_hour+=wait_hour;
    current_minute+=wait_minute;
    if(current_minute>=60){
        current_hour=current_hour+(current_minute/60);
        current_minute%=60;
    }
    while(current_hour>=24)
        current_hour-=24;
    cout<<"It will be your turn at "<<current_hour<<":"<<current_minute<<endl;
}

void time(int &current_hour,int &current_minute, int &wait_hour,int &wait_minute){
    cout<<"Enter current time in 24h notation. "<<endl;
    cout<<"Hour: ";
    cin>>current_hour;
    cout<<"Minute: ";
    cin>>current_minute;
    cout<<"What is the waiting time?"<<endl;
    cout<<"Hour: ";
    cin>>wait_hour;
    cout<<"Minute: ";
    cin>>wait_minute;
}

