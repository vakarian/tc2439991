/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 5:35 PM
 * Purpose: Write a programs that utilizes functions that convert from
 * kilograms or grams to pounds and ounces.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void input(float& mass1, float& mass2, int& pick); //Function parameters for mass1, mass2, and pick in Input Function
void calc(float& mass1, float& mass2, float& mass2a, float& mass1a);//Function parameters for mass 1,mass2, and mass1a in Calculation Function
void output(float& mass1, float& mass2, float& mass2a, float& mass1a);//Function parameters for mass1,mass2,mass2a,mass1a in Output Function

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float mass1, mass2;         //Initial masses that are inputted by the user
    float mass2a, mass1a;       //Converted masses that are outputted after conversion
    int pick;                   //Allows the user to pick between conversion
   //Function Call
   input(mass1, mass2, pick);       //Call Input Function
   calc(mass1, mass2, mass2a, mass1a);  //Call Calculation Function
   output(mass1, mass2, mass2a, mass1a);  //Call Output Function
    //QED
    return 0;
}
//Start Function Definitions
//Begin Input Function Definition
void input(float& mass1, float& mass2, int& pick){
    cout<<"\n";
    cout<<"Convert your mass from kilograms or grams to pounds and ounces.\n";
    cout<<"Enter 1 for kilograms, 2 for grams: ";
    cin>>pick;
    if(pick==1){            //Allows for the user to convert mass to kilograms if they pick 1
        cout<<"\n";
        cout<<"Enter your mass, in kilograms: ";
        cin>>mass1;
    }else if (pick==2){     //Allows for the user to convert mass to grams if they pick 2
        cout<<"\n";
        cout<<"Enter your mass, in grams: ";
        cin>>mass2;
    }
}//End Input Function Definition
//Start Conversion Function Definition
void calc(float& mass1, float& mass2, float& mass2a, float& mass1a){
    float cnvrtlb=2.2046;       
    float cnvrtkg=1000;
    mass1=mass1*cnvrtlb;        //mass1 is the product of mass1 and 2.2046
    mass1a=mass1*16;            //mass1a is the product of mass1 and 16
    mass2=(mass2/cnvrtkg)*cnvrtlb;//mass2 is the quotient of mass 2 and 1000 then multiplied by 2.2046
    mass2a=mass2*16;            //mass2a is the product of mass2 and 16
//End Conversion Function Definition           
}//Starts Output Function Definition
void output(float& mass1, float& mass2, float& mass2a, float& mass1a){
    cout.setf(ios::fixed);          //Makes the output look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(mass2==0&&mass2a==0){        //Outputs conversions
        cout<<"\n";
        cout<<"Your mass converts to "<<mass1<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass1a<<" ounces.";
        cout<<"\n";
    }else if (mass1==0&&mass1a==0){
        cout<<"\n";
        cout<<"Your mass converts to "<<mass2<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass2a<<" ounces.";
        cout<<"\n";
    }//End Output Function Definition
//End Function Definitions
}
