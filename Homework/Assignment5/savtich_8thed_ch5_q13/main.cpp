/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 5:45 PM
 * Purpose: Write a program, utilizing functions, that finds the area 
 * and perimeter of a triangle
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void input(float& a, float& b, float& c);//Function parameters for side lengths a,b,c in Input Function
void calc(float& a, float& b, float& c, float& s, float& area, float& p);//Function parameters for Calculation Function
void output(float& area, float& p); //Function parameters for area and perimeter in Output Function  
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float a, b, c, s, p, area;  //Side Lengths a, b, c, semiperimeter, perimeter, and area
    //Function Call
    input(a, b, c);           //Calls Input Function
    calc(a, b, c, s, area, p);//Calls Calculation Function
    output(area, p);         //Calls Output Function
    //QED
    return 0;
}
//Start Function Definitions
//Begin Input Function Definition
void input(float& a, float& b, float& c){
    do{
    cout<<"\n";
    cout<<"Calculate the area of a triangle. Enter all side individually.\n";
    cout<<"Enter any value less than zero and application will restart.\n";
    cout<<"First Side:  ";      //Collects the side lengths from user inputs
    cin>>a;
    cout<<"Second Side: ";
    cin>>b;
    cout<<"Third Side:  ";
    cin>>c;
    cout<<"\n";
    }while (a<=0||b<=0||c<=0); //Doesn't allow for a side length to be zero, because that doesn't make any sense.....
}//End Input Function Definition
//Start Calculation Function Definition
void calc(float& a, float& b, float& c, float& s, float& area, float& p){
    s=((a+b+c)/2);      //Heron's Formula used to find semiperimeter
    area=sqrt(s*(s-a)*(s-b)*(s-c));//Heron's Formula again
    p=a+b+c;            //Perimeter is the sum of all the side lengths
//End Calculation Function Definition           
}//Starts Output Function Definition
void output(float& area, float& p){
    cout.setf(ios::fixed);          //Makes everything looks pretty
    cout.setf(ios::showpoint);      
    cout.precision(2);              //Outputs calculations
    cout<<"Area of the rectangle is "<<area<<" units and its perimeter is "<<p<<" units."<<endl;
    }
//End Output Function Definition
//End Function Definitions
