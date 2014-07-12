/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 8, 2014, 3:45 PM
 * Purpose: Write a program to gauge the rate of inflation for the past year.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float infla(float lstYr_parm, float today_parm);
//Will calculate the rate of inflation, in percent
//The formal parameter lstYr is the price of any item last year
//The formal parameter today is the price of the same item today.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float estInf;       // Estimated Inflation
    float lstYr;        // Item's Amount from the First Year
    float today;        // Item's Amount as of Today
    char ans;           // Answer
    
    do{
    //Displayed tExt for User Input of Prices
    cout<<"Estimating the rate of inflation:"<<endl;
    cout<<"Enter the price of any item from last year: $";
    cin>>lstYr;
    cout<<"Enter today's price of that same item: $";
    cin>>today;
    cout<<"\n";
    
    //Function Call
    estInf = infla(lstYr, today);
    
    //Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Displayed Text of the Inflation Rate
    cout<<"The rate of inflation based on last years prices is ";
    cout<<estInf;
    cout<<" percent.";
    cout<<"\n";
    
    //Repeat Calculation Option
    cout<<"Would you like to recalculate an inflation estimate?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    
} while (ans=='y'||ans=='Y');
cout<<"\n";
cout<<"Live Long and Prosper.";

    // QED

    return 0;
}

float infla(float lstYr_parm, float today_parm)
{
    float diff;
    diff=(today_parm-lstYr_parm);
    return ((diff/lstYr_parm)*100);
}
