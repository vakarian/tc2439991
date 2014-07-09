/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 5, 2014, 5:11 PM
 * Purpose: Write a program that finds the temperature that is the same in both Celsius
 * and Fahrenheit.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int fhr;
    int cls;  
    
    //Conversion: Celsius to Fahrenheit
    cls = 100;
    fhr = (9.0/5.0) * cls + 32;   
    
    //Loop: Only if Celsius is not equivalent to Fahrenheit   
    while (cls!=fhr)
    {  
        fhr = (9.0/5.0) * cls + 32;
        cls=cls-1;           //Subtract 1 on the next loop.
    }
    
    // Displayed Output
    cout<<"Celsius and Fahrenheit have the same numerical value at ";
    cout<<fhr<<".";  
    
    // QED
    
    return 0;
}
