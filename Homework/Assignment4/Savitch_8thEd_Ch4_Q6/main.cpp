/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Purpose: Write a function declaration for a function that 
 * computes interest on a credit card account balance
 * Created on July 9, 2014, 3:53 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float intrst(float intBal, float moInt, int numMont);
//Returns Total Interest Due on a Credit Balance
//Formal parameter intBal refers to the initial account balance
//Formal parameter moInt refers to the monthly interest rate
//Formal parameter numMont refers to the number of months for which 
//interest is to be paid

//Execution Begins Here
int main(int argc, char** argv) {
    float intBal;            // Initial Balance
    float moInt;             // Monthly Interest
    float totInt;            // Total Interest
    int numMont;             // Number of Months
    char ans;                // Answer
        
    do{
    //Displayed Text for User Input
    //Input Includes: Initial Balance, Monthly Interest Rate, and Term
    cout<<"Calculate The Interest Due On Your Credit Account";
    cout<<"\n";
    cout<<"Enter your initial balance: $";
    cin>>intBal;
    cout<<"Enter your monthly interest rate(%): ";
    cin>>moInt;
    cout<<"Enter the number of months interest will be paid: ";
    cin>>numMont;
    
    //Calculations
    totInt=intrst(intBal, moInt, numMont);
    
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Displayed Output of the Interest Due
    cout<<"Your total interest due is: $";
    cout<<totInt;
    cout<<" over a ";
    cout<<numMont;
    cout<<" month period.";
    cout<<"\n";
    cout<<"Would you like to recalculate your interest due?";
    
    //Repeat Option
    cout<<"Enter y for yes, n for no: ";  
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"\n";
    cout<<"Live Long and Prosper.";
    cout<<"\n";
    
    // QED
    
    return 0;
}

float intrst(float intBal, float moInt, int numMont){
    
  float totInt=intBal*((moInt/100)/12)*numMont;  
  //float nuBal=intBal+(totInt+(totInt*moInt*numMont));
  return (totInt);   
}
