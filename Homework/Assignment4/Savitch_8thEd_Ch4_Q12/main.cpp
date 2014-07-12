/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Purpose: Write an overloaded function max that takes either two or three
 * parameters and returns the largest of them.
 * Created on July 10, 2014, 3:55 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

float max(float n1, float n2, float n3);
//This function returns largest parameter

float max(float n1, float n2);
//This function returns largest parameter

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float a;
    float b;
    float n1;       // First Number
    float n2;       // Second Number
    float n3;       // Third Number
    
    //Displayed Text for User Input
    cout<<"Enter three numbers:"<<endl;
    cout<<"\n";
    cin>>n1;
    cout<<"\n";
    cin>>n2;
    cout<<"\n";
    cin>>n3;
    cout<<"\n";
    
    //Calculations
    a=max(n1,n2,n3);
    
    //Displayed Text that Returns the Largest Numebr
    cout<<"The largest number is: ";
    cout<<a;
    cout<<"\n";   
    cout<<"\n";
    cout<<"Enter two numbers\n";
    cout<<"\n";
    cin>>n1;
    cout<<"\n";
    cin>>n2;
    cout<<"\n";
    b=max(n1,n2);
    cout<<"The largest number is: ";
    cout<<b;
    cout<<"\n"; 
    
    // QED
    
    return 0;
}

float max(float n1, float n2, float n3)
{
    float n=n1;
    if (n2>n)
    {
        n=n2;
    }
    if (n3>n)
    {
        n=n3;
    }
    return (n);
}
float max(float n1, float n2)
{
    float n=n1;
    if (n2>n)
    {
        n=n2;
    }
    return (n);
}
