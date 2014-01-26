/* 
 * File:   main.cpp
 * Author: Edward
 * Created on January 25, 2014, 11:47 PM
 * Savitch Chapter 4 Problem 4
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int CONV_PERC=100;

//Function Prototypes
double inflationRate(float old_price,float new_price);

//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables    
    double old_price,new_price,result;
    char ans;
    do{
        cout<<"What is the price of the item last year?"<<endl;
        cin>>old_price;
        cout<<"What is the price of the item this year?"<<endl;
        cin>>new_price;
        
        result=inflationRate(old_price,new_price);
        
        cout<<"The inflation rate is "<<result<<"%"<<endl;
        cout<<setprecision(3)<<fixed<<showpoint;
        cout<<"Continue? y/n"<<endl;
        cin>>ans;
    
    }while(ans == 'Y'||ans == 'y');
    
    return 0;
}

double inflationRate(float old_price,float new_price){
    double iRate,result;
    iRate=(new_price-old_price)/old_price;//compute inflation rate
    result=iRate*CONV_PERC;//convert to percentage
    return result;

}