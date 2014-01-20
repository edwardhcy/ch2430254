/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 9:23 PM
 * Savitch Chapter 3 Problem 12
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variable
    double pi;
    int n;
    cout<<"How many times do you want to run the series?"<<endl;
    cin>>n;
    for(double i =1;i<=n;i++){
       //pi = 4[1-(1/3)+(1/5)-(1/7)+(1/9)...+(pow(-1),n)/(2*n+1)
       pi+= pow(-1,i+1)*(4.0/(2*i-1));  
    }
    cout.precision(20);
    cout<<"The approximation of PI up to "<<n<<" times is "<<pi<<endl;
                    
    return 0;
}

