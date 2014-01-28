/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 27, 2014, 3:37 AM
 * Savitch Chapter 5 Problem 1
 */

//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes
void input(int& hours, int& minutes, char& ampm);
void convert(int& hours, int& minutes, char& ampm);
void output(int& hours, int& minutes, char& ampm);

//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables    
    int hours,minutes;
    char ans,ampm;
    do{
        input(hours,minutes,ampm);
        convert(hours,minutes,ampm);
        output(hours,minutes,ampm);
        //Ask for repetition
        cout<<"Repeat? y/n"<<endl;
        cin>>ans;
    
    }while(ans == 'Y'||ans == 'y');
    //Exit stage right
    return 0;
}

 void output(int& hours, int& minutes, char& ampm){
     if(minutes<10){
          cout<<hours<<":0"<<minutes<<ampm<<"M"<<endl;;
          }
     else cout<<hours<<":"<<minutes<<ampm<<"M"<<endl;
     }

void convert(int& hours, int& minutes, char& ampm){
     if(hours>12){
                  hours=hours-12;
                  ampm= 'P';
                  }
     else if(hours==12){ampm= 'P';}
     else ampm= 'A';
     }
void input(int& hours, int& minutes, char& ampm){
     cout<<"Enter hours: ";
     cin>>hours;
     cout<<"Enter minutes: ";
     cin>>minutes;
     }