/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3, 2014, 8:13 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
void swap(int &,int &);
void swap(int [],int,int);
void minPos(int [],int,int);
void sortArray(int [],int);
void selectionSort(int [],int);
void mrkSort(int [],int);
void xcopy(const int [],int [],int);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Open a file to record the data
    ofstream output;
    output.open("TimeStudy.dat");
    //Declare variables and initialize the
    //random number generator
    const int SIZE=200000;
    int array[SIZE],brray[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Fill the arrays
    filAray(array,SIZE);
    //Print the array
    //prntAry(array,SIZE,10);
    //Test out the min pos routine
    for(int size=10000;size<SIZE;size+=10000){
        xcopy(array,brray,size);
        int strTime=time(0);
        //mrkSort(brray,size);
        //sortArray(brray,size);
        selectionSort(brray,size);
        int endTime=time(0);
        cout<<"Total Time Taken = "<<endTime-strTime
                <<" secs for array size = "<<size<<endl;
        output<<size<<" "<<endTime-strTime<<endl;
    }
    //Print the array
    //prntAry(brray,SIZE,10);
    //Exit Stage Right!!!
    output.close();
    return 0;
}

void xcopy(const int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}
void selectionSort(int a[], int n){
    int startScan, minIndex, minValue;
    for(int i=0;i<n-1;i++){
        minIndex = i;
        minValue= a[i];
        for(int index =i+1;index<n;index++){
            if(a[index]<minValue){
                minValue = a[index];
                minIndex = index;
            }
        }
        a[minIndex] = a[i];
        a[i] = minValue;
    }

}
void sortArray(int a[],int n){
    bool swap;
    int temp;
    
    do
    {
        swap = false;
        for (int i=0; i<n-1;i++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                swap = true;
            }
        }
    }while(swap);
}
void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        minPos(a,n,i);
    }
}

void minPos(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}