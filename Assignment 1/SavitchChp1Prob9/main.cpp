/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 13, 2014, 2:45 AM
 * Savitch Chapter 1 Problem 9
 */

#include <iostream>
using namespace std;

//Global Constant

//Function Prototype

//Execution begins here
int main() {
    int DIST,TIME;
    //Explain what this program does
    cout<<"This program calculate how far an object will drop if it is in freefall";
    cout<<" for that length of time.\n";
    //Prompt for time
    cout<<"Please enter your time in seconds.\n";
    //user input time
    cin>>TIME;
    //formula
    DIST=((32)*(TIME^2))/2;
    //display result
    cout<<"Your object would have fell "<<DIST<<" feets in "<<TIME<<" seconds.";
    //exit stage right
    return 0;
}

