/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 6, 2014, 11:10 PM
 * Purpose: Write a program that lists all the prime numbers between 1-100.
 */

//System Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main (){
    //Declare Variables
    int a; 
    int b;
    
    //Repetition Structure
    for (int a = 2; a<100; a++) 
        for (int b = 2; b<a; b++)

        {
            if (a % b == 0)         //When condition is true
                break;
            else                    //When condition is false
                if (a == b+1)
                cout << a << " ";
 }   

    return 0;
    
    //QED
    
}