/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 13, 2014, 3:30 AM
 * Savitch Chapter 1 Problem 10
 */
 
//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function Prototype

//Execution begins here

int main() {
    //declare variable
    char crtC;
    cout<<"Please enter the character you like to use in ";
    cout<<"creating a large C"<<endl;
    cin>>crtC;
    
    //Output
    cout<<"  "<<crtC<<crtC<<crtC<<endl;
    cout<<" "<<crtC<<"  "<<crtC<<endl;
    cout<<crtC<<endl;
    cout<<crtC<<endl;
    cout<<crtC<<endl;
    cout<<crtC<<endl;
    cout<<crtC<<endl;
    cout<<" "<<crtC<<"  "<<crtC<<endl;
    cout<<"  "<<crtC<<crtC<<crtC<<endl;
    //Exit stage right
    return 0;
}

