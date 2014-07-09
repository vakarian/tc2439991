/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 5, 2014, 8:53 PM
 * Purpose: Write a program that finds the roots for quadratic equations.
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    int a, b, c, i;           // Variables a, b, c, i (imaginary unit)
    float x, x1, x2, x3;      // x1 = square root and everything under square root   
    char ans;                 // Answer
    do{
    //Displayed Text: Input Quadratic Equation Information
    cout<<"\n";
    cout<<"Quadratic Equation: ax^2 + bx + c = 0";
    cout<<"\n";
    cout<<"Enter your values (and remember division by zero is a big no no, so 'a' can't = 0 :D )"<<endl;
    cout<<"\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"\n";
    x3=((b*b)-(4*a*c));
    x1=sqrt((b*b)-(4*a*c));
   
    if (x1==0){        
        x=-b/(2*a);
        cout<<"x = ";
        cout<<x;
        cout<<"\n";
    }
    else if (x1>0){
        x=(-b +(x1))/(2*a);
        x2=(-b-(x1))/(2*a);
    }
    else if (x3<0){
        x1=sqrt((-1)*((b*b)-(4*a*c))); //x=(-b +(xT))/(2*a) AND x2=(-b-(xT))/(2*a);
        cout<<"x = "<<"-"<<b/(2*a)<<" + "<<x1/(2*a)<<"i";
        cout<<"\n";
        cout<<"and";
        cout<<"\n";
        cout<<"x = "<<"-"<<b/(2*a)<<" - "<<x1/(2*a)<<"i";
        cout<<"\n";
       }
    cout<<"\n";
    cout<<"Would you like to solve another quadratic equation?"<<endl;
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
        cout<<"Live long and prosper.";
        
    //QED
        
    return 0;
}