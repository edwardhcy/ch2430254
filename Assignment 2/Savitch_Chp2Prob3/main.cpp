/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 18, 2014, 9:05 PM
 * Savitch Chapter 2 Problem 3
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
    const float pay_increase = 0.076;
    float new_annual_salary,monthly_salary,amtretpay,annual_salary;
    char ans;           
    do{
        //Ask for annual salary
        cout<<"How much is your annual salary?"<<endl;
        cin>>annual_salary;
        //Formula
        amtretpay = (annual_salary*pay_increase)/2;
        new_annual_salary = (amtretpay+annual_salary);
        monthly_salary = (new_annual_salary/12);
        
        cout<<"Your retroactive pay is "<<amtretpay<<" dollars."<<endl;
        cout<<"Your new annual salary is "<<new_annual_salary
            <<" dollars."<<endl;
        cout<<"Your new monthly salary is "<<monthly_salary
            <<" dollars."<<setprecision(2)<<fixed<<showpoint<<endl;
        
        //Ask for repetition
        cout<<"Do you wish to continue?(Y/N)"<<endl;
        cin>>ans;
           
            }while(ans == 'Y'|| ans == 'y');
            cout<<"Good Bye!"<<endl;
    return 0;
}

