/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 8, 2014, 8:53 PM
 * Purpose: Write a program that will output the number of MPG based on gas
 * consumption and distance traveled by the user.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float CNVLG=0.264179;               //Conversion of one liter to gallon

//Function Prototypes
float cnsmd(float gas_par, float dist_par);//Function Declaration
//This calculates the MPG of a car
//The Gas Parameter is the amount of gas consumed by the car in liters
//The Distance Parameter is the distance that the car traveled in miles

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mpg;      // Miles Per Gallon
    float gas;      // Amount of Gas
    float dist;     // Distance Traveled
    
    //Displayed Text
    cout<<"In liters, enter your gas consumption: ";
    cin>>gas;
    cout<<"In miles, enter the total distance traveled: ";
    cin>>dist;
   
    //Conversion: Function Call
    gas=(gas*CNVLG);       
    mpg=cnsmd(gas, dist);
    
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Displayed Output Data
    cout<<"Your car has traveled ";
    cout<<dist;
    cout<<" miles, using ";
    cout<<gas;
    cout<<" gallons of gas."<<endl;
    cout<<"Your car delivered ";
    cout<<mpg;
    cout<<" miles per gallon.\n"; 
    
    //QED
    
    return 0;
}
float cnsmd(float gas_par, float dist_par) //Function Heading
{
    return (dist_par/gas_par);
}