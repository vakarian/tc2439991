/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Purpose: Write a program to simulate a vending machine.
 * Created on July 10, 2014, 3:59 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float coinIn;   // Coin Amount
    float totl;     // Total
    float chng;     // Change Amount
    
    // Displayed Text for User Input
    cout<<"Deep Fried Twinkies- $3.50";
    cout<<"\n";
    cout<<"Vending Machine Only Accepts The Following Coins";
    cout<<"\n";
    cout<<"$Dollar Coins, Quarters, Dimes, and Nickels.";
    cout<<"\n";
    
    // Calculations and Set Decimal Precision
    totl=0;
    do{
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"Insert Coin: ";       
    cin>>coinIn;
        totl=totl+coinIn;
        cout<<"You have inserted $";
    cout<<totl;
    cout<<"\n";
    }while (totl<3.50);
    chng=totl-3.50;
       if (chng>0){
       cout<<"\n";
       cout<<"Your change is: $";
       cout<<chng;
       cout<<"\n";
       cout<<"\n";
       cout<<"Congratulations, you now have diabetes! Enjoy your deep-fried twinkie!";
       cout<<"\n";
       }else
       {
           cout<<"\n";
           cout<<"Congratulations, you now have diabetes! Enjoy your deep-fried twinkie!";
           cout<<"\n";
       }
    
    // QED
    
    return 0;
}
