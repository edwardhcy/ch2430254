/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 27, 2014, 12:12 AM
 * Savitch Chapter 4 Problem 6
 */

//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes
float interest(float initial_balance,float m_iRate,float nMonth);
//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables    
    float initial_balance,m_iRate,nMonth,result;
    char ans;
    do{
        //Ask for input
        cout<<"What is the initial balance?"<<endl;
        cin>>initial_balance;
        cout<<"What is the monthly interest rate?"<<endl;
        cin>>m_iRate;
        cout<<"How many months?"<<endl;
        cin>>nMonth;
        
        result=interest(initial_balance, m_iRate, nMonth);
        cout<<"The interest due for "<<static_cast<int>(nMonth)<<" months is $"<<result<<endl;
        cout<<setprecision(2)<<fixed<<showpoint;
       
        //Ask for repetition
        cout<<"Continue? y/n"<<endl;
        cin>>ans;
    
    }while(ans == 'Y'||ans == 'y');
    //Exit stage right
    return 0;
}

 float interest(float initial_balance,float m_iRate,float nMonth){
     int i=0;
     float newbal=initial_balance,result;
     while(i<nMonth){
         i++;
         newbal*=(1+(m_iRate/100.0f));
         result=newbal-initial_balance;
     }
     return result;
 }
