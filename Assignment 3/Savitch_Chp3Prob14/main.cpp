/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 6:29 PM
 * Savitch Chapter 3 Problem 14
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution starts here
int main(int argc, char** argv) {
    for (int i=3; i<100; i++)
    {
    bool prime=true;//variables prime
    for (int j=2; j*j<=i; j++){
        if (i%j == 0) {//check if the number is a prime number
        prime=false;
        break;//give up the result    
                }
        }   
    if(prime) cout << i << " ";
    }
    cin.get();
    return 0;
}

