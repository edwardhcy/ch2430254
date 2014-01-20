/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 6:13 PM
 * Savitch Chapter 3 Problem 5
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int duration,timestarted;
    float cost;
    char first, second;
    //input the day of the week with 2 variables
    cout << "Day of the week(First two letters): " << endl;
    cin >> first >> second;
    
    cout << "Input the time the call started in 24h notation(i.e 1:30pm =1330): ";
    cin >> timestarted;//input the time started
    cout << "The length of the call in minutes: ";
    cin >> duration;//input length of the call
    cout << "Your call started at "<<timestarted<< ", Call time: "<<duration<< " minutes" << endl; 
    
    //determine and calculate
    if(((first=='M')||(second=='m'))&&((second=='O')||(second=='o'))){
    if((timestarted>=800)&&(timestarted<=1800)){
    cost=duration*0.40;} 
    
    else{ cost=duration*0.25;
    }
    }
    
    else if(((first=='T')||(first=='t'))&&((second=='U')||(second=='u'))){
    if((timestarted>=800)&&(timestarted<=1800)){
    cost=duration*0.40;}
    
    else{ cost=duration*0.25;
    }
    }
    
    else if(((first=='W')||(first=='w'))&&((second=='e')||(second=='E'))){
    if((timestarted>=800)&&(timestarted<=1800)){
    cost=duration*0.40;}  
    
    else{ cost=duration*0.25;
    }
    }
    
    else if(((first=='T')||(first=='t'))&&((second=='H')||(second=='h'))){
    if((timestarted>=800)&&(timestarted<=1800)){
    cost=duration*0.40;}
  
    else{ cost=duration*0.25;
    }
    }
    
    else if(((first=='F')||(first=='f'))&&((second=='r')||(second=='R'))){
    if((timestarted>=800)&&(timestarted<=1800)){
    cost=duration*0.40;}
  
    else{ cost=duration*0.25;
    }
    }
    
    else if(((first=='S')||(first=='s'))&&((second=='A')||(second=='a'))){
    cost=duration*0.15;
    }
    
    else if(((first=='S')||(first=='s'))&&((second=='u')||(second=='U'))){
    cost=duration*0.15;
    
    }
    cout << "Your call cost: $ " << cost << endl;
    return 0;
}

