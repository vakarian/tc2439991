/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 22, 2014, 11:32 AM
 * Purpose: Calculates the standard deviation for 4 tests
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void inScore(float& score1, float& score2, float& score3, float& score4);   //Fnction paramteres for input scores
void calcScr(float&score1, float& score2, float& score3, float& score4, float& avg, float& stdDev); //Calculate score
void outScore(float& avg, float& stdDev);            //Function parameters for for output Score
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float score1, score2, score3, score4, avg, stdDev;     //Input for scores 1-4, average of tests, and standard deviation
    char ans;                                              //Allows user to proceed with program
    do{
    //Function Call
    inScore(score1, score2, score3, score4);        //Calls Input Score Function
    calcScr(score1, score2, score3, score4, avg, stdDev); //Calls Calculation Function
    outScore(avg, stdDev);                          //Calls Output Score Function
    cout<<"Would you like to calculate the average and standard deviation of another four scores?\n";
    cout<<"Enter Y for yes, N for no: ";  //Allows the user to perform another calculation
    cin>>ans;
    cout<<"\n";
    }while (ans=='y'||ans=='Y');          //Anything other than Y exits the program
    //QED
    return 0;
}
//Start of Function Definitions
//Start of Input Score Function
void inScore(float& score1, float& score2, float& score3, float& score4){
    cout<<"\n";
    cout<<"Calculate the average and standard deviation of four of your scores.\n";
    cout<<"Enter each score individually.\n";
    cout<<"First Score:  ";   //Collects the user's input for tests 1-4
    cin>>score1;
    cout<<"Second Score: ";
    cin>>score2;
    cout<<"Third Score:  ";
    cin>>score3;
    cout<<"Fourth Score: ";
    cin>>score4;
    cout<<"\n";    
} //End of Input Score Function
//Start of Calculations Function
void calcScr(float& score1, float& score2, float& score3, float& score4, float& avg, float& stdDev){
    float temp1, temp2, temp3, temp4, totTemp;  //Used to store individual calculations for scores
    cout.setf(ios::fixed);
    cout.precision(0);
    avg=(score1+score2+score3+score4)/4;        //Average is the sum of the scores divided by 4
    temp1=((score1-avg)*(score1-avg));          //performs calculations and then stores are temp1,temp2,etc..
    temp2=((score2-avg)*(score2-avg));          //The use of "temp" simplifies the calculations
    temp3=((score3-avg)*(score3-avg));
    temp4=((score4-avg)*(score4-avg));
    totTemp=temp1*temp2*temp3*temp4;            //The total is equivalent to the product of all the temps       
    stdDev=sqrt(totTemp);                       //Standard Deviation = the square root of the total temps
}//End of Calculations Function
//Start of Output Function
void outScore(float& avg, float& stdDev){
    cout<<"Your average score is ";  //Output the standard deviation that was calculated in the function above
    cout<<avg;
    cout<<"\n";
    cout<<"The standard deviation of the four scores is ";
    cout<<stdDev;
    cout<<"\n";
}//End of Output Function
