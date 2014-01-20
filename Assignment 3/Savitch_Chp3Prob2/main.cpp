/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 7:46 AM
 * Savitch Chapter 3 Problem 2
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
    float interestdue,total_amountdue,min_payment,accountbal,interest = 0.015;
    //Ask for account balance
        cout<<"What is your account balance?"<<endl;
        cin>>accountbal;
        cout<<endl;
        
        if(accountbal<=1000){
            total_amountdue = accountbal*1.015;
            interestdue = accountbal*interest;
            cout<<"Interest due: $"<<interestdue<<endl;
            cout<<"Total amount due: $"<<total_amountdue<<endl;
        }else{
            total_amountdue =accountbal*1.01;
            interestdue = accountbal*0.01;
            cout<<"Interest due: $"<<interestdue<<endl;
            cout<<"Total amount due: $"<<total_amountdue<<endl;
        }
        if(total_amountdue<=10)
        cout<<"Your minimum Payment: "<<total_amountdue<<endl;
        else if(total_amountdue*0.01 > 10)
        cout<<"Your minimum Payment: "<<total_amountdue*0.01<<endl;
        else cout<<"Minimum Payment: $10"<<endl;
    //exit stage right
       cin.get();
    return 0;
}