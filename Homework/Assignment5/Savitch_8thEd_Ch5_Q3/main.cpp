/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 *  Created on July 22, 2014, 10:48 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void input(int& hour, int& mins); //Function parameters for hour and minutes in Input Function
void wait(int& hour, int& mins);  //Function parameters for hour and minutes in Wait Function
void twelve(int& hrs, int& mins, char& ampm); //Function parameters for hours, minutes, and AM/PM in Twelve Function
void output(int& hour, int& mins, char& ampm);//Function parameters for hours, minutes, and AM/PM in Output Function

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hour, mins;             //Hours and Minutes
    char ans;                   //Ans allows the user to proceed with the 
    char ampm;                  //AM and PM
    do{
    //Function Call    
    input(hour, mins);          //Calls the Input Function
    wait(hour, mins);           //Calls the Wait Function
    twelve(hour, mins, ampm);   //Calls the Twelve Function
    output(hour, mins, ampm);   //Calls the Output Function
    cout<<"Would you like to recalculate your wait time?\n";
    cout<<"Enter y for yes, n for no: "; //Allows the user to perform another calculation
    cin>>ans;
    cout<<"\n";                         //Anything other than Y exits the program
    }while(ans=='y'||ans=='Y');
    //QED
    return 0;
}
//Start of Function Definitions
//Begin Input Function Definition
void input(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";     //Allows the user to input hours and wait time
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}//End Input Function Definition
//Start Wait Function Definition
void wait(int& hour, int& mins){
    if (mins>59){       //performs calculations for wait time
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    } 
}//End Wait Function Definition
//Start Twelve Function Definition
void twelve(int& hour, int& mins, char& ampm){
    if (hour>12&&hour<=23){
        hour=hour-12;           //Assigns PM/AM to converted times
        ampm='P';
    }else if (hour==12){
        ampm='P';
    }else if(hour==0){
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){
        ampm='A';
    }else if(hour>=24||mins>59){    //Tells the user their entry wasn't valid
        cout<<"\n";
        cout<<"This was not a valid entry! Please try again.";
    }
}//End Twelve Function Definition
//Start Output Function Definition
void output(int& hour, int& mins, char& ampm){
    cout<<"The time will be ";      //Outputs calculated wait time
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" "<<ampm<<"M after your wait.\n";
}//End Output Function Definition
//End Function Definitions