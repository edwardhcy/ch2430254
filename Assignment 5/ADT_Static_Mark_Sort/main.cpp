/* 
 * File:   main.cpp
 * Author: Edward
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
void swap(StatAry &,int,int);
void minPos(StatAry &,int,int);
void mrkSort(StatAry &,int);
void xcopy(const StatAry,StatAry,int);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    const int SIZE=200;
    int array[SIZE],brray[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    StatAry sAry, sBry;
    //Fill the structure
    filAray(sAry,SIZE);
    //xcopy(sAry,sBry,SIZE);
    //Print the array
    //prntAry(sAry,SIZE);
    //Test out the min pos routine
    mrkSort(sAry,SIZE);
    //Print the array
    prntAry(sAry,SIZE);
    //Exit Stage Right!!!
    return 0;
}

void xcopy(const StatAry &a,StatAry &b,int n){
    for(int i=0;i<n;i++){
        b.data[i]=a.data[i];
    }
}

void mrkSort(StatAry &a,int n){
    for(int i=0;i<n-1;i++){
        minPos(a,n,i);
    }
}

void minPos(StatAry &a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a.data[pos]>a.data[i])swap(a.data[pos],a.data[i]);
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap(StatAry &a,int i,int j){
    int temp=a.data[i];
    a.data[i]=a.data[j];
    a.data[j]=temp;
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
