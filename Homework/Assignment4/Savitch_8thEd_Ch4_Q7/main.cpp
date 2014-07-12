/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Purpose: Write a function definition that takes arguments for the masses
 * of two bodies and the distance between them and returns the gravitational 
 * force.
 * Created on July 9, 2014, 3:53 PM
 */

#include <iostream>
using namespace std;

//Global Constants
const float G = 6.673e-8; //Universal Gravitational Constant

//Function Prototypes
float gravFrc(float massOne, float massTwo, float dist);
//Returns the gravitational force between two bodies.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable
    float mass1;        // Mass of the First Body
    float mass2;        // Mass of the Second Body
    float dist;         // Distance Between the Two Bodies
    float force;        // Gravitational Force Between the Two Bodies
    char ans;           // Answer
    
    do{
    //Displayed Text for User Input
    cout<<"Calculate the gravitational force between two bodies:";
    cout<<"\n";
    cout<<"Enter the mass (in grams) of the first body: ";
    cin>>mass1;
    cout<<"Enter the mass (in grams) of the second body: ";
    cin>>mass2;
    cout<<"Enter the distance (in centimeters) between the two bodies: ";
    cin>>dist;
    
    //Function Call
    force=gravFrc(mass1, mass2, dist);
    cout<<"The gravitational force between the two bodies is: ";
    cout<<force;
    cout<<" dynes.";
    cout<<"\n";
    cout<<"Would you like to recalculate?";
    cout<<"\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    cout<<"\n";
    
    } while (ans=='y'||ans=='Y');
    cout<<"Live Long and Prosper.";
    
    // QED
    
    return 0;
}
float gravFrc(float massOne, float massTwo, float dist)
{
    float F;
    F=((G*massOne*massTwo)/(dist*dist));
    return (F);
}