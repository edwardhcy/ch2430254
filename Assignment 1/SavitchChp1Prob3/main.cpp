/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 11, 2014, 9:30 PM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //declare variable
    //NPODS = number of pods
    //PEASPPD = peas per pod
    //TTLPEAS = total peas
    int NPODS, PEASPPD, TTLPEAS;
    cout<<"Hello\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    //input number of pods
    cin>> NPODS;
    
    cout<<"Enter the number of peas in a pod:\n";
    
    //input peas per pod
    cin>>PEASPPD;
    
    //formula for calculating
    //changed * to / according to question 3
    TTLPEAS=NPODS/PEASPPD;
    cout<<"If you have ";
    cout<< NPODS;
    cout<< " pea pods\n";
    cout<< "and ";
    cout<< PEASPPD;
    cout<< " peas in each pod, then\n"
            " you have ";
    //display result
    cout<< TTLPEAS;
    cout<< " peas in all the pods.\n";
    cout<<"Good-bye\n";
    //exit stage right
    return 0;
}

