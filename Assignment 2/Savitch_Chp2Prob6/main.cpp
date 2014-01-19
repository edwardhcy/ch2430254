/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 1:32 AM
 * Savitch Chapter 2 Problem 6
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
    short ppl, extrappl,maxcpty;
    char ans;
    do{
        //Explains what the program do
        cout<<"This program will determine whether your meeting room "
            <<"is in violation of fire law regulation."<<endl;
        cout<<"How many people are in this room?"<<endl;
                cin>>ppl;
        cout<<"What is the maximum capacity of this room?"<<endl;
        cin>>maxcpty;
        if(ppl>maxcpty){
            extrappl = ppl-maxcpty;
            cout<<"You need to remove "<<extrappl<<" from this room before the"
                <<" meeting could be held."<<endl;
        }
        else{
            extrappl=maxcpty-ppl;
            cout<<"There are "<<extrappl<<" slots available to fill up "
                  "this room"<<endl;    
        }
           
    //Ask for repeat
        cout<<"Do you wish to continue?(Y/N)"<<endl;
        cin>>ans;
    
    }while(ans == 'Y' || ans =='y');
    cout<<"Good Bye!"<<endl;
    
    
    return 0;
}

