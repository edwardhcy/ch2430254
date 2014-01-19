/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 5:17 AM
 * Savitch Chapter 2 Problem 8
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants
const short CONV_PERC = 100;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float ifltrate,cost,futurecost;
    short years;
    char ans;
    do{
        cout<<"What is the cost of the item?"<<endl;
        cin>>cost;
        cout<<"What is the inflation rate?(%)"<<endl;
        cin>>ifltrate;
        ifltrate/=CONV_PERC;
        cout<<"How many years?"<<endl;
        cin>>years;
        //formula
        futurecost=cost*pow((1+ifltrate),years);
        //result
        cout<<"The cost of the item in "<<years<<" year(s) will be "
            <<futurecost<<endl; 
        //Ask for repeat
        cout<<"Do you wish to continue?(Y/N)"<<endl;
        cin>>ans;
    
    }while(ans == 'Y' || ans =='y');
    cout<<"Good Bye!"<<endl;
    
    
    return 0;
}

