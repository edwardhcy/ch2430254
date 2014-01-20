/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 4:29 PM
 * Savitch Chapter 3 Problem 16
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables
    int fahrenheit, celsius = 100;
    //
    while(fahrenheit!=celsius){
        fahrenheit=((9*celsius)/5)+32;
    celsius--;
    }
    //result
    cout<<"Fahrenheit:"<<fahrenheit<<" F"<<endl;
    cout<<"Celsius:"<<celsius<<" C"<<endl;      
    
    return 0;
}

