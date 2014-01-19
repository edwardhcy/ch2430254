/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 2:52 AM
 * Savitch Chapter 2 Problem 5
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const short CNV_PERC=100;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    float amtreceived, iRate, duration, facevalue, monthly_payment;
    char ans;
    do{
        //Explains what the program do
        cout<<"This program will calculate the face value required in order";
        cout<<"for you to received the amount needed."<<endl;
        cout<<"Now, enter the amount you needed."<<endl;
        //Ask for input
        cin>>amtreceived;
        cout<<"What is the duration for the loan in months?"<<endl;
        cin>>duration;
        cout<<"What is the interest rate?(%)"<<endl;
        cin>>iRate;
        iRate/=CNV_PERC;
        //Formula
        facevalue = amtreceived/(1-((iRate)*(duration/12)));
        monthly_payment = facevalue/duration;
        //Result
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"You need "<<facevalue<<" dollars to get the "<<amtreceived<<
              " dollars you needed."<<endl;
        cout<<"Your monthly payment is "<<monthly_payment<<" dollars."<<endl;
        
    //Ask for repeat
        cout<<"Do you wish to continue?(Y/N)"<<endl;
        cin>>ans;
    
    }while(ans == 'Y' || ans =='y');
    cout<<"Good Bye!"<<endl;
    
    
    return 0;
}

