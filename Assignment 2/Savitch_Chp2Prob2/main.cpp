/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 18, 2014, 7:29 PM
 * Savitch Chapter 2 Problem 2
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
    float weight, Mweight,amtKILLm,amtKILL;
    int amtSoda;
    const double dietsoda = 0.001;
    char ans;
        do{
            //Prompt for weight
            cout<<"What is your desired weight?"<<endl;
            cin>>weight;
            //Prompt for amount to kill a mouse
            cout<<"What is the amount of artificial sweetener that will kill"
                <<" a mouse?"<<endl;
            cin>>amtKILLm;
           //Prompt for weight of mouse
            cout<<"What is the weight of the mouse?"<<endl;
            cin>>Mweight;
            //result        
            cout<<"The amount of diet soda you can drink without"
                  " dying is "<<amtSoda<<"cans."<<endl;
            //Formula
            amtKILL=(amtKILLm/Mweight)*weight;
            amtSoda=(amtKILL/dietsoda);
    //Ask for repetition
    cout<<"Do you wish to continue?(Y/N)"<<endl;
    cin>>ans;
           
            }while(ans == 'Y'|| ans == 'y');
            cout<<"Good Bye!"<<endl;
    return 0;
}