/* 
 * File:   main.cpp
 * Author: Chanyap Ho
 * Created on January 19, 2014, 8:15 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variable
    float a, b, c;
    float posRoot, negRoot, middle, first;
    float discriminant;
    //Variables Input
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    //Equations
    middle = 4*a*c;
    first= pow(b,2);
    discriminant = (first-middle);
    posRoot = (-b + sqrt(discriminant))/2*a;
    negRoot = (-b - sqrt(discriminant))/2*a;

    //Determine whether it has real solutions or not
    if (discriminant == 0)
    {
    cout << endl;
    cout << "The discriminant is ";
    cout << discriminant << endl;
    cout << "The equation has a single root.";
    }
    else if (discriminant < 0)
    {
    cout << endl;
    cout << "The discriminant is ";
    cout << discriminant << endl;
    cout << "The equation has two complex roots." << endl;
    }
    else
    {
    cout << endl;
    cout << "The discriminant is ";
    cout << discriminant << endl;
    cout << "The equation has two real roots." << endl << endl;
    }

    //The values of roots
    cout << "The roots of the quadratic equation are x = ";
    cout << negRoot;
    cout << ", ";
    cout << posRoot << endl << endl;

    return 0;
}

