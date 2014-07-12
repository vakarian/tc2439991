/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Purpose: Modification of Q4 that prints out the estimated price for an extra year.
 * Created on July 8, 2014, 3:52 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float infla(float lstYr_parm, float today_parm);
//This calculates the rate of inflation and outputs a percentage
//The First Year Parameter is the price of any item last year
//The Today Parameter is the price of any item as of today

float futInfl(float estInf_parm, float today_parm);
//This calculates an estimated future pricing based on the calculated interest rate
//The Estimated Inflation parameter is the calculated rate of inflation
//Today's Parameter is the price of an item today

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float estInf;           // Estimated Inflation
    float lstYr;            // Price of Item during the First Year
    float today;            // Price of Same Item as of Today
    float nxtYr;            // Price of an Item Next Year
    float fllwYr;           // Price of an Item the Following Year
    char ans;               // Estimated Inflation Amount
    
    do{
    //Displayed Text for User Input Prices
    cout<<"Estimating the rate of inflation:"<<endl;
    cout<<"Enter last years price of any item: $";
    cin>>lstYr;
    cout<<"Enter today's price of that same item: $";
    cin>>today;
    
    //Function Call (Estimate Interest Rate)
    estInf = infla(lstYr, today);
    
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Displayed Text for Inflation Rate
    cout<<"The rate of inflation based on last years prices is ";
    cout<<estInf;
    cout<<" percent.";
    cout<<"\n";
    
    //Function Call (Future Pricing:Year 1)
    nxtYr = futInfl(estInf, today);
    
    //Future Estimate of Inflation (Year 1)
    cout<<"\n";
    cout<<"Based on this interest rate we can expect that next year's";
    cout<<" price of your item will be $";
    cout<<nxtYr;
    cout<<"\n";
    
    //Function Call (Future Pricing:Year 2)
    fllwYr = futInfl(estInf, nxtYr);
    
    //Future Estimate of Inflation (Year 2)
    cout<<"\n";
    cout<<"And based on this interest rate we can expect that the ";
    cout<<"following year's price of your item will be $";
    cout<<fllwYr;
    cout<<"\n";
    cout<<"\n";
    
    //Repeat Calculation Option
    cout<<"Would you like to recalculate an inflation estimate?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    
    } while (ans=='y'||ans=='Y');
    cout<<"\n";
    cout<<"Live Long and Prosper.";

    // QED

    return 0;
}

float infla(float lstYr_parm, float today_parm)
    {
        float diff;
        diff=(today_parm-lstYr_parm);
        return ((diff/lstYr_parm)*100);
    }

float futInfl(float estInf_parm, float today_parm)
{
        return ((estInf_parm/100)*today_parm+today_parm);
}

