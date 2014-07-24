/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 12:37 PM
 * Purpose: Write a program that will convert meters/centimeters to feet
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void input(float& lngth1, float& lngth2, int& pick);   //Function parameters for length1,length2, and pick
void calc(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a); //Function parameters for length1(a),length2(a))
void output(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a); //Function parameters for length1(a),length2(a))
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float lngth1, lngth2, lngth1a, lngth2a;   //Lengths 1&2 are used for Meters, Lengths 1a&2a are used for Centimeters
    int pick;                                 //Allows the user to pick between converting meters or centimeters
    //Function Call
    input(lngth1, lngth2, pick);              //Calls Input Function
    calc(lngth1, lngth2, lngth2a, lngth1a);   //Calls Calculation Function
    output(lngth1, lngth2, lngth2a, lngth1a); //Calls Output Function
    //QED
    return 0;
}
//Start of Function Definitions
//Begins Input Function Definition
void input(float& lngth1, float& lngth2, int& pick){
    cout<<"Convert your length from meters or centimeters to feet and inches.\n";
    cout<<"Enter 1 for meters, 2 for centimeters: ";
    cin>>pick;                      //Allows the user to pick between converting meters of centimeters
    if(pick==1){                    //If 1, converts meters
        cout<<"\n";
        cout<<"Enter your length, in meters: ";
        cin>>lngth1;
    }else if (pick==2){             //If 2, converts centimeters
        cout<<"\n";
        cout<<"Enter your length, in centimeters: ";
        cin>>lngth2;
    }
//End Input Function Definition
}
//Start Calculation Function Definition
void calc(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a){
    float cnvrtft=0.3048;               //.3048 is used in the meters conversion
    float cnvrtmt=100;                  //100 is used to convert meters to centimeters
    lngth1=lngth1/cnvrtft;              //length1 = length1 divided by .3048
    lngth2=(lngth2/100)/cnvrtft;        //length2 = length2 divided by 100 and then divided by .3048
    lngth1a=lngth1*12;                  //the lengths are then multiplied by 12 to convert to feet
    lngth2a=lngth2*12;
}//End Calculation Function Definition
//Start Output Function Definition
void output(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a){
    cout.setf(ios::fixed);          //Makes the output look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(lngth2==0&&lngth2a==0){      //Outputs centimeter to feet conversion
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth1<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth1a<<" inches.";
        cout<<"\n";
    }else if (lngth1==0&&lngth1a==0){   //Outputs meter to feet conversion
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth2<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth2a<<" inches.";
        cout<<"\n";
    }
//End Output Function Definition
//End Function Definitions
}

