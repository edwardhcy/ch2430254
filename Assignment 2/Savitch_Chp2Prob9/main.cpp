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
    float cost = 1000,iRate = 0.015,monthly_payment = 50,newcost;
    int month = 0;
    char ans;
    do{
        //Explanation
        cout<<"This program tells you how many months to clear your debt."<<endl;
        
        if(newcost>0){
            newcost=(monthly_payment-(cost*iRate));
            cost-=newcost;
            month++;
        }else{
            cout<<"You will need "<<month<<" to repay all the debt."<<endl;
            }
        
        //Ask for repeat
        cout<<"Do you wish to continue?(Y/N)"<<endl;
        cin>>ans;
    
    }while(ans == 'Y' || ans =='y');
    cout<<"Good Bye!"<<endl;
    
    
    return 0;
}