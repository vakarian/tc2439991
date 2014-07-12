/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 8, 2014, 10:20 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float CNVLG=0.264179;  //Conversion of 1 Liter to a Gallon

//Function Prototypes
float cnsmd(float gas_par, float dist_par);//Function Declaration
//This calculates the MPG of a car
//The Gas Parameter is the amount of gas consumed by the car in liters
//The Distance Parameter is the distance that the car traveled in miles

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable
    float mpg;          // Miles Per Gallon for the First Car
    float mpgTwo;       // Miles Per Gallon for the Second Car
    float gas;          // Gas Consumption for the First Car
    float gasTwo;       // Gas Consumption for the Second Car
    float dist;         // Distance Traveled by the First Car
    float distTwo;      // Distance Traveled by the Second Car
    
    //Displayed Text for User Input of First Car
    cout<<"In liters, enter the amount of gas consumed by the first car: ";
    cin>>gas;
    cout<<"In miles, enter the total distance traveled by the first car: ";
    cin>>dist;
    cout<<"\n";
    
    //Displayed Text for User Input of Second Car
    cout<<"In liters, enter the amount of gas consumed by the second car: ";
    cin>>gasTwo;
    cout<<"In miles, enter the total distance traveled by the second car: ";
    cin>>distTwo;
    cout<<"\n";
    
    //Convert amount of gas from liters to gallons
    //gas=(gas*CNVLG);
    //gasTwo=(gasTwo*CNVLG);
    //Function Call
    mpg=cnsmd(gas, dist);
    mpgTwo=cnsmd(gasTwo, distTwo);
    
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Output Car One Info
    cout<<"The First Car has traveled ";
    cout<<dist;
    cout<<" miles, using ";
    cout<<(gas*CNVLG);
    cout<<" gallons of gas."<<endl;
    cout<<"The First Car delivered ";
    cout<<mpg;
    cout<<" miles per gallon."<<endl;
    
    //Output Car Two Info
    cout<<"The Second Car has traveled ";
    cout<<distTwo;
    cout<<" miles, using ";
    cout<<(gasTwo*CNVLG);
    cout<<" gallons of gas."<<endl;
    cout<<"The Second Car delivered ";
    cout<<mpgTwo;
    cout<<" miles per gallon."<<endl;
    
    //Fuel Efficiency Between the Two Cars
    if (mpg<mpgTwo)
        cout<<"The First Car is more fuel efficiency.\n";
    else
        cout<<"The Second Car is more fuel efficiency.\n";
    
    // QED
    return 0;
}

float cnsmd(float gas_par, float dist_par) //Function Heading
{
    return (dist_par/(gas_par*CNVLG));
}