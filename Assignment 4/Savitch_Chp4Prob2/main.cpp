/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 24, 2014, 5:45 PM
 * Savitch Chapter 4 Problem 2
 */

//System Libraries   
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants
const float CNV_ltr_to_gal = (1/3.785411784);
//Function Prototypes
float gasUsed(float miles,float liters);

//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables
    int miles;
    float liters,result;
    char ans;
    do{
    //Prompt for input
    cout<<"How many liters of gasoline does car 1 used in this trip?"<<endl;
    cin>>liters;
    cout<<"How many miles did did you travel in car 1?"<<endl;
    cin>>miles;
    result = gasUsed(miles, liters);
    cout<<"Your car's mpg is "<<result<<endl;
    
    cout<<"How many liters of gasoline does car 2 used in this trip?"<<endl;
    cin>>liters;
    cout<<"How many miles did you travel in car 2?"<<endl;
    cin>>miles;
    result = gasUsed(miles, liters);
    cout<<"Your car's mpg is "<<result<<endl;
    cout<<"Do you wish to continue?(y/n)"<<endl;
    cin>>ans;
    }while(ans =='Y'||ans =='y');
    //Exit stage right
    return 0;
}
//Calculate the mpg
float gasUsed(float miles,float liters){
    float mpg;
    mpg=(miles)/(liters*CNV_ltr_to_gal);
    return(mpg);
}