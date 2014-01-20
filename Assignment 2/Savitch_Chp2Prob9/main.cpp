/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 5:46 AM
 * Savitch Chapter 2 Problem 9
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float cost = 1000, remaining_debt,total_interestpaid = 0,interest;
    const float iRate = 0.015;
    const int monthly_payment = 50;
    int month = 0;
        //Explanation
        cout<<"This program tells you how many months to clear your debt."<<endl;
        remaining_debt = cost;//starting debt
        
        while(remaining_debt>0){
            
            interest = remaining_debt*iRate;
            remaining_debt -= (monthly_payment-(interest));
            total_interestpaid+=(interest);
            month++;
        }
            cout<<"You will need "<<month<<" months to repay all the debt."<<endl;
            cout<<"You would have paid $"<<(total_interestpaid)<<" in interest."<<endl;
            cin.get();
      return 0;          
}
