/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 16, 2014, 6:58 PM
 * Savitch Chapter 2 Problem 1
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
    float ounces, metcton;
    short nBox;
    char ans;
        do{
    //Prompt for input
    cout<<"What is the weight of your breakfast cereal in ounces?"<<endl;
    //Input
    cin>>ounces;
    //Calculation
    metcton = ounces/35273.92;
    nBox = 35273.92/ounces;
            
    cout<<"Your breakfast cereal weight in metric ton is "<<metcton<<" tons."<<endl;
    cout<<"You need "<<nBox<<" boxes to yield 1 metric ton of cereals."<<endl;
    //Ask for repetition
    cout<<"Do you wish to continue converting?(Y/N)"<<endl;
    cin>>ans;
           
            }while(ans == 'Y'|| ans == 'y');
            cout<<"Good Bye!"<<endl;
    return 0;
}

