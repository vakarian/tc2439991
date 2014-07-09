/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 4, 2014, 1:19 PM
 * Purpose: Write a program that will calculate revolving credit payment amount.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float amnt;             // Amount
    float intrst1=.015;     // First Interest
    float intrst2=.01;      // Second Interest
    float totlD;            // Total Due
    float minPymnt;         // Minimum Payment
    char  ans;              // Answer
    
    do{
    //Displayed Output Text
    cout<<"Calculate payment due on your account."<<endl;
    cout<<"Enter Account Balance: $";
    cin>>amnt;
    
    //Two Decimal Points
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    
    //Calculations 
    if (amnt<=1000){
        float tmpInt = amnt*intrst1;     //Calculate Interest
        totlD = tmpInt + amnt;           //Calculate Total
        cout<<"Your total amount due is $";
        cout<<totlD;
        cout<<"Your minimum payment is $";
             if (totlD<=10){
                 cout<<totlD;
             }else if (totlD>10){
                 minPymnt=totlD*.10;
                 cout<<minPymnt;
             } 
    }else if (amnt>=1000){
        float tmp = amnt-1000;            //Subtract 1st $1000 to calculate interest on remainder
        float tmpInt = 1000*intrst1;      //Calculate interest on first $1000
        float tmpInt2 = tmp*intrst2;      //Calculate interest on remainder amount
        totlD = tmpInt+tmpInt2+tmp+1000;  //Calculate Total
        minPymnt=totlD*.10;
        cout<<"Your total amount due is $";
        cout<<totlD;
        cout<<"Your minimum payment is $";
        cout<<minPymnt;
    }else
         
    //Option: Repeat Calculations
    cout<<"Would you like to calculate another amount?"<<endl;
    cout<<"Y for yes, N for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"Live long and prosper.";
    
    //QED
    
    return 0;
}