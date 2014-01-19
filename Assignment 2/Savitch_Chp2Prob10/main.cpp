/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 5:54 AM
 * Savitch Chapter 2 Problem 10
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
    int number,posSum = 0,negSum = 0,sum =0,i;
    char ans;
    do{
        for(i=1;i<=10;i++){
            cout<<"Enter your number"<<i<<":"<<endl;
            cin>>number;         
            if(number>=0){
                posSum+=number;
            
            }else{
                negSum+=number;
            }
            sum+=number;
        }
        cout<<"The sum of positive numbers:"<<posSum<<endl;
        cout<<"The sum of negative numbers:"<<negSum<<endl;
        cout<<"The sum of all numbers:"<<sum<<endl;
        
        //Ask for repeat
        cout<<"Do you wish to repeat this?(Y/N)"<<endl;
        cin>>ans;
    
    }while(ans == 'Y' || ans =='y');
    cout<<"Good Bye!"<<endl;
    //exit stage right
    
    return 0;
}