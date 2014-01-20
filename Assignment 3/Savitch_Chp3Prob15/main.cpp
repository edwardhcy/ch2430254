/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 8:27 PM
 * Savitch Chapter 3 Problem 15
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables
    const double pi = 3.1415926535897;
    float y=62.4f;//lb/ft^3
    float weight, volume, force, radius;
    cout << "Input the weight(in pounds): ";
    //Input the weight of sphere
    cin >> weight;
    cout << endl;
    cout << "Input the radius(in feet): ";
    //Input radius
    cin >> radius;
    cout << endl;
    //Formula
    force=62.4f*(4/3)*pi*radius;
    //if the force greater or equal to weight,then it will float
    if(force>=weight){
                      cout << "The sphere will float." << endl;
                      }
    else{
         cout << "The sphere will sink." << endl;
         }
    return 0;
}

