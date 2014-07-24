/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 5:27 PM
 * Purpose: Write a program that includes functions that converts pounds and 
 * ounces to kilograms and grams.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void input(float& pound, float& ounce);     //Function Parameters pounds/ounces in Input Function
void cnvrt(float& pound, float& ounce, float& kg, float& g);//Function Parameters for pounds/ounces/grams in Conversion Parameter
void output(float& pound, float& ounce, float& kg, float& g);//Function Parameters for pounds/ounces/grams in Output Parameter
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float pound, ounce, kg, g;  //Pounds, Ounces, Kilograms, and Grams
    //Function Call
    input(pound, ounce);       //Call Input Function
    cnvrt(pound, ounce, kg, g);//Call Conversion Function
    output(pound, ounce, kg, g);//Call Output Function         
    //QED
    return 0;
}
//Start Function Definitions
//Begin Input Function Definition
void input(float& pound, float& ounce){
    cout<<"Enter your weight in pounds and then ounces.\n";
    cout<<"Pounds(lbs): ";  //Collects pounds and ounces from user input
    cin>>pound;
    cout<<"Ounces(oz): ";
    cin>>ounce;
    cout<<"\n";
}//End Input Function Definition
//Start Conversion Function Definition
void cnvrt(float& pound, float& ounce, float& kg, float& g){
    pound=pound+(ounce/16); //Pounds is equal to pounds + ounces divided by 16
    kg=(pound/2.2046);      //converts kilograms by dividing pounds by 2.2046
    g=kg*1000;              //grams is equal to kilograms multiplied by 1000
//End Conversion Function Definition           
}//Starts Output Function Definition
void output(float& pound, float& ounce, float& kg, float& g){
    cout.setf(ios::fixed);      //Makes everything look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your weight has been converted to the following units. \n";
    cout<<"kilograms: ";        //Outputs conversions
    cout<<kg;
    cout<<"\n";
    cout<<"grams: ";
    cout<<g;
    cout<<"\n";
}//End Output Function Definition
//End Function Definitions