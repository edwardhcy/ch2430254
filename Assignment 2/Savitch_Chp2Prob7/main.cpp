/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 4:32 AM
 * Savitch Chapter 2 Problem 7
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
    short dependents, hours; 
    const float rate =16.78, sstax = 0.06, fitax = 0.14, sitax = 0.05,
             OTrate = 1.5, uniondue = 10, insurance = 35;
    float grosspay, netpay;
    char ans;
    do{
       
       cout<<"How many hours do you work in a week?"<<endl;
       cin>>hours;
       cout<<"Enter the number of your dependents" << endl;
       cin>>dependents;
       
       if(hours>40&&dependents>=3){
           //formula
           grosspay = (hours*rate)+(hours-40)*rate*OTrate;
           netpay=grosspay*(1-sstax-fitax-sitax)-uniondue-insurance;
           //result      
           cout<<"Your gross pay is " <<grosspay<<" dollars."<<endl;
           cout<<"Your net pay is "<<netpay<<" dollars."<<endl;
           cout<<"Withheld by Social security tax: $"<<grosspay*sstax<<endl;
           cout<<"Withheld by federal income tax: $"<< grosspay*fitax<<endl;
           cout<<"Withheld by state income tax: $"<< grosspay*sitax<<endl;
           cout<<"Withheld for union dues: $"<<uniondue<<endl;
           cout<<"Health insurance cost: $"<<insurance<< endl;
       }else{
           if(hours<=40&&dependents>=3){
                grosspay = (hours*rate);
                netpay=grosspay*(1-sstax-fitax-sitax)-uniondue-insurance;
                //result      
                cout<<"Your gross pay is " <<grosspay<<" dollars."<<endl;
                cout<<"Your net pay is "<<netpay<<" dollars."<<endl;
                cout<<"Withheld by Social security tax: $"<<grosspay*sstax<<endl;
                cout<<"Withheld by federal income tax: $"<< grosspay*fitax<<endl;
                cout<<"Withheld by state income tax: $"<< grosspay*sitax<<endl;
                cout<<"Withheld for union dues: $"<<uniondue<<endl;
                cout<<"Health insurance cost: $"<<insurance<< endl;
           }else{
               if(hours>40&&dependents<3){
                grosspay = (hours*rate)+(hours-40)*rate*OTrate;
                netpay=grosspay*(1-sstax-fitax-sitax)-uniondue;
                //result      
                cout << "Your gross pay is " <<grosspay<<" dollars."<<endl;
                cout << "Your net pay is "<<netpay<<" dollars."<<endl;
                cout << "Withheld by Social security tax: $"<<grosspay*sstax<<endl;
                cout << "Withheld by federal income tax: $"<< grosspay*fitax<<endl;
                cout << "Withheld by state income tax: $"<< grosspay*sitax<<endl;
                cout << "Withheld for union dues: $"<<uniondue<<endl;
                
                
               }else{
                   grosspay = (hours*rate);
                   netpay=grosspay*(1-sstax-fitax-sitax)-uniondue;
                   //result      
                   cout << "Your gross pay is " <<grosspay<<" dollars."<<endl;
                   cout << "Your net pay is "<<netpay<<" dollars."<<endl;
                   cout << "Withheld by Social security tax: $"<<grosspay*sstax<<endl;
                   cout << "Withheld by federal income tax: $"<< grosspay*fitax<<endl;
                   cout << "Withheld by state income tax: $"<< grosspay*sitax<<endl;
                   cout << "Withheld for union dues: $"<<uniondue<<endl;
                   
               }
           }
       
       }
     
    //Ask for repeat
        cout<<"Do you wish to continue?(Y/N)"<<endl;
        cin>>ans;
    
    }while(ans == 'Y' || ans =='y');
    cout<<"Good Bye!"<<endl;
    
    
    return 0;
}

