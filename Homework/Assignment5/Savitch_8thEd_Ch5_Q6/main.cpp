/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 11:59 AM
 * Purpose: Write a program that utilizes functions that converts feet/inches to meters and centimeters
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void input (float& feet, float& inch);          //Function parameters for input of feet/inches
void cnvrsn(float& feet, float& inch, float& meters, float& cenmtrs);   //Function parameters for conversions
void output(float& feet, float& inch, float& meters, float& cenmtrs);   //Function parameters for output of feet/inches and meters/centimeters

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float feet, inch, meters, cenmtrs;  //Feet, inches, meters, centimeters
    char ans;                           //Allows the user to proceed with the program
    do{
    //Function Call
    input(feet, inch);                  //Calls the Input Function
    cnvrsn(feet, inch, meters, cenmtrs);//Calls the Conversion Function
    output(feet, inch, meters, cenmtrs);//Calls the Output Function
    cout<<"Would you like to convert another length?\n";
    cout<<"Enter y for yes, n for no: ";    //Gives the user the option to perform the conversion again
    cin>>ans;
    }while (ans=='y'||ans=='Y');            //Anything other than Y will end the program
    //QED
    return 0;
}
//Start of FUnction Definitions
//Beginning of Input Function Definition
void input(float& feet, float& inch){
    cout<<"\n";
    cout<<"Convert your length from feet and inches to meters and centimeters.\n";
    cout<<"Enter your length in two parts, feet then inches.\n\n";
    cout<<"Feet: ";    //Allows the User to input feet and inches
    cin>>feet;
    cout<<"Inches: ";
    cin>>inch;     
    cout<<"\n";
    cout<<"You entered "<<feet<<"\'"<<inch<<"\"";
    cout<<"\n";
}//End of Input Function Definition
//Start of Conversion Function Definition
void cnvrsn(float& feet, float& inch, float& meters, float& cenmtrs){
        feet=feet+(inch/12);   //feet is feet plus the inches divided by 12
        meters=feet*0.3048;    //multiples feet by .3048, converting feet to meters
        cenmtrs=meters*100;    //multiplies meters by 100, converting meters to centimeters
}//End of Conversion Function Definition
//Start of Output Function Definition
void output(float& feet, float& inch, float& meters, float& cenmtrs){
    cout.setf(ios::fixed);          //Makes the output look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"\n";
    cout<<"Your length in meters: "<<meters<<" meters"<<endl;
    cout<<"Your length in centimeters: "<<cenmtrs<<" centimeters"<<endl;
    cout<<"\n";
//End of Output Function Definition
}

