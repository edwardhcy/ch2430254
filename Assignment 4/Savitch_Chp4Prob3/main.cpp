/* 
 * File:   main.cpp
 * Author: Edward
 * Created on January 25, 2014, 5:56 PM
 * Savitch Chapter 4 Problem 3
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
double priceshare(int stockowned,int dollarPortion, int numeratorPortion,int denominatorPortion);
//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables
    int stockowned, dollar,numerator,denominator;
    double result;
    char ans;
    do{
        cout<<"Number of shares of stock owned: ";
        cin>>stockowned;
        cout<<"Whole-dollar portion of the price:  ";
        cin>>dollar;
        cout<<"Numerator: ";
        cin>>numerator;
        cout<<"Denominator: ";
        cin>>denominator;
        result = priceshare(stockowned,dollar,numerator,denominator);
        
        cout<<"The price per share of stock is "<<result<<endl;
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"Continue? y/n"<<endl;
        cin>>ans;
    
    }while(ans == 'Y'||ans == 'y');
    
    return 0;
}

double priceshare(int stockowned,int dollarPortion, int numeratorPortion,int denominatorPortion){
    double price, price_per_share;
    price=(dollarPortion+(numeratorPortion/denominatorPortion));
    price_per_share= price/stockowned;
    return price_per_share;

}