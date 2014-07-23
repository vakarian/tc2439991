/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 10:38 AM
 * Purpose: Write a program that include functions that will output
 * a wait time given an input time based on a 24-hour clock
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void input(int& hour, int& mins); //Function parameters for input of hours/minutes
void waitT(int& hour, int& mins); //Function parameters for wait time calculations of hours/minutes
void output(int& hour, int& mins);//Function parameters for output time of hours/minutes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hour, mins;         //Hours and Minutes that the User will Input
    char ans;               //Answer for User to proceed with the program
    do{
    //Function Call    
    input(hour, mins);      //Calling the Input Function
    waitT(hour, mins);      //Calling the Wait Time Function
    output(hour, mins);     //Calling the Output Function
    cout<<"Would you like to recalculate your wait time?\n"; //Gives the user the option to calculate another wait time
    cout<<"Enter Y for yes, N for no: ";
    cin>>ans;
    cout<<"\n";
    }while(ans=='y'||ans=='Y');  //Anything other than Y will exit the program
    //QED
    return 0;
}
//Start Function Definition
//Beginning of the Input Function Definition
void input(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
//End Input Function Definition
}
//Begin Wait Time Function Definition
void waitT(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    }    
//End Wait Time Function Definition
}
//Start Output Time Function Definition
void output(int& hour, int& mins){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" hours after your wait.\n";
//End Output Time Function Definition
}

