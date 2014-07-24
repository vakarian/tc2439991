/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 5:58 PM
 * Purpose: Write a program, utilizing functions, that calculates wind chill
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void input(float& wspd, float& temp); //Function parameter for wind speed and temperature in INput Function
void calc(float& wspd, float& temp, float& windch);//Function parameter for wind speed, temperature, and windchill in Calculations Function
void output(float& windch);//Function parameters for windchill in the Output Function
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float wspd, temp, windch;  //Wind speed, temperature, and windchill
    char ans;                  //Allows the user to proceed with the program
    do{
    //Function Call
    input(wspd, temp);  //Calls Input Function
    calc(wspd, temp, windch);//Calls Calculation Function
    output(windch);         //Calls Output Function
    cout<<"Would you like to recalculate your Wind Chill?\n";
    cout<<"Enter y for yes, n for no: "; //Allows the user to do another calculation for windchill
    cin>>ans;
    }while (ans=='y'||ans=='Y');        //Anything other than Y exits the program
    //QED
    return 0;
}
//Start Function Definitions
//Begin Input Function Definition
void input(float& wspd, float& temp){
    do{
    cout<<"Calculate Windchill in your area in temperatures below 50 degrees Fahrenheit.\n";
    cout<<"If the temperature entered is over 50 degrees Fahrenheit the program will start again.\n";
    cout<<"Enter the following required information.\n";
    cout<<"Wind Speed(mph): ";      //Collects wind speed and temperature from the user
    cin>>wspd;
    cout<<"Temperature(F): ";
    cin>>temp;
    cout<<"\n";
    }while (temp>=51);      //Ensures that the temperature input by the user isn't below 50 degrees Fahrenheit
}//End Input Function Definition
//Start Calculation Function Definition
void calc(float& wspd, float& temp, float& windch){
    //Wind Chill Formula found from National Weather Service Online (because Savitch was too lazy to give it to us))
    windch=35.74+(0.6215*temp)-(35.75*pow(wspd,0.16))+(0.4275*temp*pow(wspd,0.16));
//End Calculation Function Definition           
}//Starts Output Function Definition
void output(float& windch){
    cout.setf(ios::fixed);      //Makes the output look pretty
    cout.precision(0);
    cout<<"\n";
    cout<<"Your Wind Chill temperature is ";
    cout<<windch;
    cout<<" degrees Fahrenheit.\n";
}//End Output Function Definition
//End Function Definitions
