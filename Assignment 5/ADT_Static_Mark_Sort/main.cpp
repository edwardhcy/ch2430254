/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 *
 * Created on February 11, 2014, 12:39 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

//Global Constants
const int SIZE=200;
//ADT's not in user defined libraries
struct StatAry{
    int data[SIZE];
    int utlSize;
};

//Function Prototypes
void filAray(StatAry &,int);
void prntAry(const StatAry &,int);
void swap(int &,int &);
void minPos(StatAry &,int);
void mrkSort(StatAry &);
void xcopy(const StatAry &,StatAry &);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    const int SIZE=200;
    srand(static_cast<unsigned int>(time(0)));
    StatAry sAry, sBry;
    //Fill the structure
    filAray(sAry,SIZE);
    xcopy(sAry,sBry);
    //Print the array
    prntAry(sAry,SIZE);
    //Test out the min pos routine
    mrkSort(sBry);
    //Print the array
    prntAry(sBry,SIZE);
    //Exit Stage Right!!!
    return 0;
}

void xcopy(const StatAry &a,StatAry &b){
    b.utlSize=a.utlSize;
    for(int i=0;i<a.utlSize;i++){
        b.data[i]=a.data[i];
    }
}

void mrkSort(StatAry &a){
    for(int i=0;i<a.utlSize-1;i++){
        minPos(a,i);
    }
}

void minPos(StatAry &a,int pos){
    for(int i=pos+1;i<a.utlSize;i++){
        if(a.data[pos]>a.data[i])swap(a.data[pos],a.data[i]);
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(const StatAry &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.utlSize;i++){
        //cout<<setw(4)<<a.data[i];
        cout<<a.data[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(StatAry &a,int n){
    //Validate the size of array
    if(n<=1||n>SIZE)n=2;
    a.utlSize=n;
    //Fill the array with 3 digit numbers
    for(int i=0;i<a.utlSize;i++){
        a.data[i]=rand()%90+10;
    }
}
