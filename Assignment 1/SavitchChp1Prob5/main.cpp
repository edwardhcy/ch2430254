/* 
 * File:   main.cpp
 * Author: Chanyap Ho 
 * Created on January 12, 2014, 10:55 PM
 * Savitch Chapter 1 Question 5
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //declare variable
    int ITGR1,ITGR2,SUM,PDT;
    //prompt for 1st integer
    cout <<"Please enter your 1st integer.\n";
    cin>>ITGR1;
    //prompt for 2nd integer
    cout <<"Please enter your 2nd integer.\n";
    cin>>ITGR2;
    //formula
    SUM=ITGR1+ITGR2;
    PDT=ITGR1*ITGR2;
    //result
    cout <<"The sum of your 1st and 2nd integer is "<<SUM<<endl;
    cout <<"The product of your 1st and 2nd integer is "<<PDT<<endl;
    //exit stage right
    return 0;
}

