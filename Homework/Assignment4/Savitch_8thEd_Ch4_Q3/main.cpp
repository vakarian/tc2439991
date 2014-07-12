/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 8, 2014, 4:03 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float tot(int whole_par,int numer_par,int denom_par);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int shrs;           // User's Shares
    int whole;          // Whole Dollar Amount
    int numer;          // Numerator Amount
    int denom;          // Denominator Amount
    float val;          // First Value
    float val2;         // Second Value
    char ans;           // Answer
    
    //Displayed Text for User Input of Shares, Dollar, Fractional Amounts
    do{
    cout<<"Enter the number of shares that you own: ";
    cin>>shrs;
    cout<<"Enter the whole dollar portion of the price of your shares: ";
    cin>>whole;
    cout<<"Enter the numerator of the fraction of dollar amount: ";
    cin>>numer;
    cout<<"Enter the denominator of the fraction of dollar amount: ";
    cin>>denom; 
    
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Function Call
    val=tot(whole,numer,denom);
    
    //Value of Shares
    val=val/shrs;    
    cout<<"The price of one share of stock is $"<<val<<endl;
    
    //Value of Total Stocks
    val2=val*shrs;
    cout<<"The total value of your shares is $"<<val2<<endl;
    cout<<endl;
    cout<<"Would you like to run the program again? (Y/N): ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    
    // QED
    
    return 0;
}

// Function Heading
float tot(int whole_par,int numer_par,int denom_par){     
    return (((whole_par*static_cast<float>(denom_par))+static_cast<float>(numer_par))/static_cast<float>(denom_par));
}