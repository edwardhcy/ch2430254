/* 
 * File:   main.cpp
 * Author: Chanyap Ho 
 * Created on January 12, 2014, 10:55 PM
 * Savitch Chapter 1 Question 6
 */

//introduced error= extra space in front of iostream
/*"/usr/bin/make" -f nbproject/Makefile-Debug.mk QMAKE= SUBPROJECTS= .build-conf
make[1]: Entering directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
"/usr/bin/make"  -f nbproject/Makefile-Debug.mk dist/Debug/Cygwin_4.x-Windows/savitchchp1prob6.exe
make[2]: Entering directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
mkdir -p build/Debug/Cygwin_4.x-Windows
rm -f "build/Debug/Cygwin_4.x-Windows/main.o.d"
g++    -c -g -MMD -MP -MF "build/Debug/Cygwin_4.x-Windows/main.o.d" -o build/Debug/Cygwin_4.x-Windows/main.o main.cpp
main.cpp:10:21: fatal error:  iostream: No such file or directory
 #include < iostream>
                     ^
compilation terminated.
nbproject/Makefile-Debug.mk:66: recipe for target 'build/Debug/Cygwin_4.x-Windows/main.o' failed
make[2]: *** [build/Debug/Cygwin_4.x-Windows/main.o] Error 1
make[2]: Leaving directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
nbproject/Makefile-Debug.mk:59: recipe for target '.build-conf' failed
make[1]: *** [.build-conf] Error 2
make[1]: Leaving directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
nbproject/Makefile-impl.mk:39: recipe for target '.build-impl' failed
make: *** [.build-impl] Error 2*/

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes


//error introduced= mispelled the word main
/*"/usr/bin/make" -f nbproject/Makefile-Debug.mk QMAKE= SUBPROJECTS= .build-conf
make[1]: Entering directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
"/usr/bin/make"  -f nbproject/Makefile-Debug.mk dist/Debug/Cygwin_4.x-Windows/savitchchp1prob6.exe
make[2]: Entering directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
mkdir -p build/Debug/Cygwin_4.x-Windows
rm -f "build/Debug/Cygwin_4.x-Windows/main.o.d"
g++    -c -g -MMD -MP -MF "build/Debug/Cygwin_4.x-Windows/main.o.d" -o build/Debug/Cygwin_4.x-Windows/main.o main.cpp
mkdir -p dist/Debug/Cygwin_4.x-Windows
g++     -o dist/Debug/Cygwin_4.x-Windows/savitchchp1prob6 build/Debug/Cygwin_4.x-Windows/main.o 
/usr/lib/gcc/i686-pc-cygwin/4.8.2/../../../libcygwin.a(libcmain.o): In function `main':
/usr/src/debug/cygwin-1.7.27-2/winsup/cygwin/lib/libcmain.c:39: undefined reference to `WinMain@16'
collect2: error: ld returned 1 exit status
nbproject/Makefile-Debug.mk:62: recipe for target 'dist/Debug/Cygwin_4.x-Windows/savitchchp1prob6.exe' failed
make[2]: *** [dist/Debug/Cygwin_4.x-Windows/savitchchp1prob6.exe] Error 1
make[2]: Leaving directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
nbproject/Makefile-Debug.mk:59: recipe for target '.build-conf' failed
make[1]: *** [.build-conf] Error 2
make[1]: Leaving directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
nbproject/Makefile-impl.mk:39: recipe for target '.build-impl' failed
make: *** [.build-impl] Error 2
*/

//Execution begins here
int main() {
    //declare variable
    //ITGR1= integer 1
    //ITGR2= integer 2
    //SUM= sum
    //PDT= product
    int ITGR1,ITGR2,SUM,PDT;
    
    //prompt for 1st integer
    cout <<"Please enter your 1st integer.\n";
    cin>>ITGR1;
    
    //prompt for 2nd integer
    cout <<"Please enter your 2nd integer.\n";
    
//error introduced= misspell cin
/*"/usr/bin/make" -f nbproject/Makefile-Debug.mk QMAKE= SUBPROJECTS= .build-conf
make[1]: Entering directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
"/usr/bin/make"  -f nbproject/Makefile-Debug.mk dist/Debug/Cygwin_4.x-Windows/savitchchp1prob6.exe
make[2]: Entering directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
mkdir -p build/Debug/Cygwin_4.x-Windows
rm -f "build/Debug/Cygwin_4.x-Windows/main.o.d"
g++    -c -g -MMD -MP -MF "build/Debug/Cygwin_4.x-Windows/main.o.d" -o build/Debug/Cygwin_4.x-Windows/main.o main.cpp
main.cpp: In function ‘int main()’:
main.cpp:69:5: error: ‘cn’ was not declared in this scope
     cn>>ITGR2;
     ^
nbproject/Makefile-Debug.mk:66: recipe for target 'build/Debug/Cygwin_4.x-Windows/main.o' failed
make[2]: *** [build/Debug/Cygwin_4.x-Windows/main.o] Error 1
make[2]: Leaving directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
nbproject/Makefile-Debug.mk:59: recipe for target '.build-conf' failed
make[1]: *** [.build-conf] Error 2
make[1]: Leaving directory '/cygdrive/c/Users/Edward/Desktop/SavitchChp1Prob6'
nbproject/Makefile-impl.mk:39: recipe for target '.build-impl' failed
make: *** [.build-impl] Error 2*/
    cin>>ITGR2;
    //formula for sum and product
    SUM=ITGR1+ITGR2;
    PDT=ITGR1*ITGR2;
    //result
    cout <<"The sum of your 1st and 2nd integer is "<<SUM<<endl;
    cout <<"The product of your 1st and 2nd integer is "<<PDT<<endl;
    
    return 0;
}

