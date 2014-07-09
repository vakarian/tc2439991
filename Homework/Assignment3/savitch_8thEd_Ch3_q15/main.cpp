/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 5, 2014, 3:45 PM
 * Purpose: Write a program that inputs the weight (in pounds) and radius (in feet)
 * of a sphere and outputs whether the sphere will sink or float in water.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
        //Declare Variables
        float bForce;               // Buoyant Force
        float vol;                  // Volume
        float wtrW=62.4;            // Water Weight
        float rad;                  // Radius
        float sphWht;               // Specific Weight
        float pi=3.14159265;        // PI constant

        //Displayed Text
        cout<<"Enter the radius of your sphere in feet: ";
        cin>>rad;
        cout<<"Enter the weight of your sphere in pounds: ";
        cin>>sphWht;

        //Calculations
        vol = (pi * rad * rad * rad *4) / 3;
        
        //Set Decimal Accuracy
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        
        //Displayed Output Text
        cout<<"The volume of your sphere is ";
        cout<<vol;
        cout<<" cubic feet.";
        
        //Calculations (For Buoyant Force)
        bForce = vol * wtrW;
        
        //Displayed Output (For Buoyant Force)
        cout<<"The buoyant force of your sphere is ";
        cout<<bForce;
        cout<<" pounds.";
        
        if (bForce>=sphWht){
            cout<<"Your sphere will float!";
        }else
            cout<<"Your sphere will sink.";
            cout<<"\n";
            
    // QED
        
    return 0;
}