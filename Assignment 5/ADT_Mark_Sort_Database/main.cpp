/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on February 3, 2014, 8:13 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants
const int SIZE=10000;
//ADT's
struct Array{
    int data[SIZE];
    int indx[SIZE];
    int szUtil;
};

//Function Prototypes
void filAray(Array &,Array &,int);
void prntAry(Array &,Array &,int);
void prntAry(Array &,int);
void swap(int &,int &);
void minPos(Array &,Array &,int);
void mrkSort(Array &,Array &);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    const int SIZE=200;
    Array array,index;
    srand(static_cast<unsigned int>(time(0)));
    //Fill the arrays
    filAray(array,index,SIZE);
    //Print the arrays
    prntAry(array,index,10);
    //Test out the min pos routine
    mrkSort(array,index);
    //Print the array
    prntAry(array,index,10);
    prntAry(index,10);
    prntAry(array,10);
    //Exit Stage Right!!!
    return 0;
}

void mrkSort(Array &a,Array &indx){
    for(int i=0;i<a.szUtil-1;i++){
        minPos(a,indx,i);
    }
}

void minPos(Array &a,Array &indx,int pos){
    for(int i=pos+1;i<a.szUtil;i++){
        if(a.data[a.indx[pos]]>a.data[a.indx[i]])
                swap(a.indx[pos],a.indx[i]);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.szUtil;i++){
        cout<<a.data[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(Array &a,Array &indx,int perLine){
    cout<<endl;
    for(int i=0;i<a.szUtil;i++){
        cout<<a.data[a.indx[i]]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(Array &a,Array &indx,int n){
    if(n<1||n>SIZE)n=2;
    a.szUtil=n;
    for(int i=0;i<a.szUtil;i++){
        a.data[i]=rand()%90+10;
        a.indx[i]=i;
    }
}