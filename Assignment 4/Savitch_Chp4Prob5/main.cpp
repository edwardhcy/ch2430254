/* 
 * File:   main.cpp
 * Author: Edward
 * Created on January 25, 2014, 12:02 PM
 * Savitch Chapter 4 Problem 5
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
double estimateCost(float recent_price,float inflation_rate);
//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables    
    double old_price,new_price,result,result2,recent_price,result3;
    char ans;
    do{
        cout<<"What is the price of the item last year?"<<endl;
        cin>>old_price;
        cout<<"What is the price of the item this year?"<<endl;
        cin>>new_price;
        
        result=inflationRate(old_price,new_price);
        cout<<"The inflation rate is "<<result<<"%"<<endl;
        cout<<setprecision(2)<<fixed<<showpoint;
        //calculate the price one year from now
        result2=estimateCost(new_price, result);
        cout<<"The item will cost $"<<result2<<" in one year from now."<<endl;
        
        //calculate the price two year from now
        result3=estimateCost(result2, result);
        cout<<"The item will cost $"<<result3<<" in two year from now."<<endl;
        //Ask for repetition
        cout<<"Continue? y/n"<<endl;
        cin>>ans;
    
    }while(ans == 'Y'||ans == 'y');
    //Exit stage right
    return 0;
}

double estimateCost(float recent_price,float inflation_rate){
    double futureprice;
    futureprice=recent_price*(1+(inflation_rate/100));
    return futureprice;
}

double inflationRate(float old_price,float new_price){
    double iRate,result;
    iRate=(new_price-old_price)/old_price;//compute inflation rate
    result=iRate*CONV_PERC;//convert to percentage
    return result;

}