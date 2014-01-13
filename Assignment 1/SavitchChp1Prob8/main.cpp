/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 13, 2014, 2:00 AM
 * Savitch Chapter 1 Problem 8
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variable
    //QTR = Quarter
    //DIME= Dime
    //NCKL= Nickel
    //TOTAL= Total cents
    int QTR,DIME,NCKL,TOTAL;
    
    //prompt for number of quarter
    cout<<"Please enter your quarter.\n";
    cin>> QTR;
    
    //prompt for number of dime
    cout<<"Please enter your dime.\n";
    cin>> DIME;
    
    //prompt for number of nickel
    cout<<"Please enter your nickel.\n";
    cin>> NCKL;
    
    //formula for calculating
    TOTAL=25*QTR+10*DIME+5*NCKL;
    
    //display the result
    cout<<"You have "<<TOTAL<<" cent(s).\n";
    //exit stage right
    return 0;
}

