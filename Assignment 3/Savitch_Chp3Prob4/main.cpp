/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 3:36 PM
 * Savitch Chapter 3 Problem 4
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
    unsigned short month,day;
    cout << "Enter your birthday, for example: Month: 3 Day: 10"<<endl;
    cout << "Month: ";
    cin >> month;//input the month
    cout << "Day: ";
    cin >> day;//input the day
    cout << "Your birthday is "<<month<<"/" <<day<<endl;
    
    //result
    if(month==3 && 21<=day){
    cout << "Your horoscope is Aries" <<endl;
    cout << "You are more comfortable with Aries, Leo, and Sagittarius" <<endl;
    }else if(month==4 && day<=19){
    cout << "Your horoscope is Aries" <<endl;
    cout << "You are more comfortable with Aries, Leo, and Sagittarius" << endl;
    }if(month==4 && 20<=day){
    cout << "Your horoscope is Taurus" <<endl;
    cout << "You are more comfortable with Taurus, Virgo, and Capricorn" << endl;
    }if(month==5 && day<=20){
    cout << "Your horoscope is Taurus" <<endl;
    cout << "You are more comfortable with Taurus, Virgo, and Capricorn" <<endl;
    }if(month==5 && 21<=day){
    cout << "Your horoscope is Gemini" <<endl;
    cout << "You are more comfortable with Gemini, Libra, and Aquarius" <<endl;
    }if(month==6 && day<=21){
    cout << "Your horoscope is Gemini" <<endl;
    cout << "You are more comfortable with Gemini, Libra, and Aquarius" <<endl;
    }if(month==6 && 22<=day){
    cout << "Your horoscope is Cancer" <<endl;
    cout << "You are more comfortable with Cancer, Scorpio, and Pisces" <<endl;
    }if(month==7 && day<=22){
    cout << "Your horoscope is Cancer" <<endl;
    cout << "You are more comfortable with Cancer, Scorpio, and Pisces"<<endl;
    }if(month==7 && 23<=day){
    cout << "Your horoscope is Leo" <<endl;
    cout << "You are more comfortable with Aries, Leo, and Sagittarius"<<endl;
    }if(month==8 && day<=22){
    cout << "Your horoscope is Leo" <<endl;
    cout << "You are more comfortable with Aries, Leo, and Sagittarius" <<endl;
    }if(month==8 && 23<=day){
    cout << "Your horoscope is Virgo" <<endl;
    cout << "You are more comfortable with Taurus, Virgo, and Capricorn" <<endl;
    }if(month==9 && day<=22){
    cout << "Your horoscope is Virgo" <<endl;
    cout << "You are more comfortable with Taurus, Virgo, and Capricorn" <<endl;
    }if(month==9 && 23<=day){
    cout << "Your horoscope is Libra" <<endl;
    cout << "You are more comfortable with Gemini, Libra, and Aquarius" <<endl;
    }if(month==10 && day<=22){
    cout << "Your horoscope is Libra" <<endl;
    cout << "You are more comfortable with Gemini, Libra, and Aquarius" <<endl;
    }if(month==10 && 23<=day){
    cout << "Your horoscope is Scorpio" <<endl;
    cout << "You are more comfortable with Cancer, Scorpio, and Pisces" <<endl;
    }if(month==11 && day<=21){
    cout << "Your horoscope is Scorpio" <<endl;
    cout << "You are more comfortable with Cancer, Scorpio, and Pisces" <<endl;
    }if(month==11 && 22<=day){
    cout << "Your horoscope is Sagittarius" <<endl;
    cout << "You are more comfortable with Aries, Leo, and Sagittarius" <<endl;
    }if(month==12 && day<=21){
    cout << "Your horoscope is Sagittarius" <<endl;
    cout << "You are more comfortable with Aries, Leo, and Sagittarius" <<endl;
    }if(month==12 && 22<=day){
    cout << "Your horoscope is Capricorn" <<endl;
    cout << "You are more comfortable with Taurus, Virgo, and Capricorn" <<endl;
    }if(month==1 && day<=19){
    cout << "Your horoscope is Capricorn" <<endl;
    cout << "You are more comfortable with Taurus, Virgo, and Capricorn" <<endl;
    }if(month==1 && 20<=day){
    cout << "Your horoscope is Aquarius" <<endl;
    cout << "You are more comfortable with Gemini, Libra, and Aquarius" <<endl;
    }if(month==2 && day<=18){
    cout << "Your horoscope is Aquarius" <<endl;
    cout << "You are more comfortable with Gemini, Libra, and Aquarius" <<endl;
    }if(month==2 && 19<=day){
    cout << "Your horoscope is Pisces" <<endl;
    cout << "You are more comfortable with Cancer, Scorpio, and Pisces" <<endl;
    }if(month==3 && day<=20){
    cout << "Your horoscope is Pisces" <<endl;
    cout << "You are more comfortable with Cancer, Scorpio, and Pisces" <<endl;
         }
//exit stage right
      return 0;          
}
