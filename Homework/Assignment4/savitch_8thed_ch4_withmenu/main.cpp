/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 10, 2014, 09:12 PM
 * Purpose: Assignment 4 Savitch 8th Edition with Menu
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const float CNVLG=0.264179; //Conversion for 1 & 2
const float G = 6.673e-8;   //Gravitational Constant for 7

//Function Prototypes
float cnsmd(float gas_par, float dist_par); //Function for 1 & 2
float tot(int whole_par,int numer_par,int denom_par);//Function for 3
float infla(float lstYr_parm, float today_parm); //Function for 4
float infla(float lstYr_parm, float today_parm); //Function for 5
float futInfl(float estInf_parm, float today_parm); //Function for 5
float intrst(float intBal, float moInt, int numMont); //Function for 6
float gravFrc(float massOne, float massTwo, float dist); //Function for 7
float cos(float aMor_par,float taxS_par); //Function for 8
float tax(float ilb_par,float intrT_par,float taxS_par);//Function for 8
float mor(float intr_par, float ilb_par, float intrT_par);//Function for 8
float ilBal(float pHouse_par, float dPaymt_par);//Function for 8
float max(float n1, float n2, float n3);//Function for 12
float max(float n1, float n2);//Function for 12


//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    bool extMenu = true;
do{    
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl<<endl;
    cout<<"1. Savitch 8th Edition Chapter 4 Problem 1"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 4 Problem 2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 4 Problem 3"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 4 Problem 4"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 4 Problem 5"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 4 Problem 6"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 4 Problem 7"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 4 Problem 8"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 4 Problem 12"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 4 Problem 15"<<endl<<endl;
    cout<<"Enter your selection: ";
    cin>>choose;
    //Utilize switch to implement the menu
    switch(choose){
        case 1:{
            //Start of Problem 1
               //Declare Variables
               float mpg;      // Miles Per Gallon
               float gas;      // Amount of Gas
               float dist;     // Distance Traveled

               //Displayed Text
               cout<<"In liters, enter your gas consumption: ";
               cin>>gas;
               cout<<"In miles, enter the total distance traveled: ";
               cin>>dist;

               //Conversion: Function Call
               gas=(gas*CNVLG);       
               mpg=cnsmd(gas, dist);

               //Set Decimal Precision
               cout.setf(ios::fixed);
               cout.setf(ios::showpoint);
               cout.precision(2);

               //Displayed Output Data
               cout<<"Your car has traveled ";
               cout<<dist;
               cout<<" miles, using ";
               cout<<gas;
               cout<<" gallons of gas."<<endl;
               cout<<"Your car delivered ";
               cout<<mpg;
               cout<<" miles per gallon.\n"; 
            //End of Problem 1
            break;
        }
        case 2:{
            //Start of Problem 2
            //Declare Variable
             float mpg;          // Miles Per Gallon for the First Car
             float mpgTwo;       // Miles Per Gallon for the Second Car
             float gas;          // Gas Consumption for the First Car
             float gasTwo;       // Gas Consumption for the Second Car
             float dist;         // Distance Traveled by the First Car
             float distTwo;      // Distance Traveled by the Second Car

             //Displayed Text for User Input of First Car
             cout<<"In liters, enter the amount of gas consumed by the first car: ";
             cin>>gas;
             cout<<"In miles, enter the total distance traveled by the first car: ";
             cin>>dist;
             cout<<"\n";

             //Displayed Text for User Input of Second Car
             cout<<"In liters, enter the amount of gas consumed by the second car: ";
             cin>>gasTwo;
             cout<<"In miles, enter the total distance traveled by the second car: ";
             cin>>distTwo;
             cout<<"\n";

             //Convert amount of gas from liters to gallons
             //gas=(gas*CNVLG);
             //gasTwo=(gasTwo*CNVLG);
             //Function Call
             mpg=cnsmd(gas, dist);
             mpgTwo=cnsmd(gasTwo, distTwo);

             //Set decimal precision
             cout.setf(ios::fixed);
             cout.setf(ios::showpoint);
             cout.precision(2);

             //Output Car One Info
             cout<<"The First Car traveled ";
             cout<<dist;
             cout<<" miles, using ";
             cout<<(gas*CNVLG);
             cout<<" gallons of gas."<<endl;
             cout<<"The First Car delivered ";
             cout<<mpg;
             cout<<" miles per gallon."<<endl;

             //Output Car Two Info
             cout<<"The Second Car traveled ";
             cout<<distTwo;
             cout<<" miles, using ";
             cout<<(gasTwo*CNVLG);
             cout<<" gallons of gas."<<endl;
             cout<<"The Second Car delivered ";
             cout<<mpgTwo;
             cout<<" miles per gallon."<<endl;

             //Fuel Efficiency Between the Two Cars
             if (mpg<mpgTwo)
                 cout<<"The First Car is more fuel efficiency.\n";
             else
                 cout<<"The Second Car is more fuel efficiency.\n";
          //End of Problem 2
           break;
        }
        case 3:{
            //Start of Problem 3
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
            //End of Problem 3
            break;
        }
        case 4:{
            //Start of Problem 4
            //Declare Variables
            float estInf;       // Estimated Inflation
            float lstYr;        // Item's Amount from the First Year
            float today;        // Item's Amount as of Today
            char  ans;          // Inflation Amount

            do{
            //Displayed tExt for User Input of Prices
            cout<<"Estimating the rate of inflation:"<<endl;
            cout<<"Enter the price of any item from last year: $";
            cin>>lstYr;
            cout<<"Enter today's price of that same item: $";
            cin>>today;
            cout<<"\n";

            //Function Call
            estInf = infla(lstYr, today);

            //Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            //Displayed Text of the Inflation Rate
            cout<<"The rate of inflation based on last years prices is ";
            cout<<estInf;
            cout<<" percent.";
            cout<<"\n";

            //Repeat Calculation Option
            cout<<"Would you like to recalculate an inflation estimate?\n";
            cout<<"Enter Y for yes, N for no: ";
            cin>>ans;

        } while (ans=='y'||ans=='Y');
        cout<<"\n";
        cout<<"Live Long and Prosper.";
            //End of Problem 4
            break;
        }
        case 5:{
            //Start of Problem 5
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
            cout<<"Based on this interest rate we can expect that the ";
            cout<<"following year's price of your item will be $";
            cout<<fllwYr;
            cout<<"\n";
            cout<<"\n";

            //Repeat Calculation Option
            cout<<"Would you like to recalculate an inflation estimate?"<<endl;
            cout<<"Enter Y for yes, N for no: ";
            cin>>ans;

            } while (ans=='y'||ans=='Y');
            cout<<"\n";
            cout<<"Live Long and Prosper.";
            //End of Problem 5
            break;
        }
        case 6:{
            //Start of Problem 6
            //Declare Variables
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
            cout<<"Enter Y for yes, N for no: ";  
            cin>>ans;
            }while (ans=='y'||ans=='Y');
            cout<<"\n";
            cout<<"Live Long and Prosper.";
            cout<<"\n";
            //End of Problem 6
            break;
        }
        case 7:{
            //Start of Problem 7
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

                // Displayed Output Text
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
            //End of Problem 7
            break;
        }
        case 8:{
            //Start of Problem 8
            //Define Variables
            float pHouse;           // House Payment
            float dPaymt;           // Down Payment
            float ilb;              // Initial Loan Balance
            float aMor;             // Annual Mortgage
            float intr=.03;         // Estimated Annual Mortgage 
            float intrT=.06;        // Loan Principal plus 6 percent of the Initial Loan Balance
            float sPerc;            // Percentage
            float taxS=.35;         // Assumed 35 percent marginal tax
            float cost;             // Overall Cost
            char ans;               // Answer

            //Displayed Text for User Input: Price of House & Down Payment
            do{
            cout<<"Enter the price of your house $";
            cin>>pHouse;
            cout<<"Enter the down payment $";
            cin>>dPaymt;

            //Set Decimal Precision
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            //Function Call
            ilb=ilBal(pHouse,dPaymt);
            aMor=mor(intr,ilb,intrT);
            taxS=tax(ilb,intrT,taxS);    
            cost=cos(aMor,taxS);

            //Displayed Output Text for the Total After-Tax Cost
            cout<<"Your annual after-tax cost is $"<<cost<<" for the first year of ownership"<<endl;
            cout<<endl;
            cout<<"Would you like to repeat the program? Enter Y for Yes, and N for No: ";
            cin>>ans;
            cout<<endl;
            }while (ans=='y'||ans=='Y');
            cout<<"Live Long and Prosper."<<endl;  
            //End of Problem 8
            break;
        }
        case 9:{
            //Start of Problem 12
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
            //End of Problem 12
            break;
        }
        
        case 10: 
        //Start of Problem 15
            float coinIn;   // Coin Amount
    float totl;     // Total
    float chng;     // Change Amount
    
    // Displayed Text for User Input
    cout<<"Deep Fried Twinkies- $3.50";
    cout<<"\n";
    cout<<"Vending Machine Only Accepts The Following Coins";
    cout<<"\n";
    cout<<"Dollar Coins, Quarters, Dimes, and Nickels.";
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
        //End of Problem 15
        default:extMenu=false;
    }
}while(extMenu);
    // QED
    return 0;
}

//Solution to Problem 1 & 2
float cnsmd(float gas_par, float dist_par){
    return (dist_par/gas_par);
}

//Solution to Problem 4
float inflat(float lstYr_parm, float today_parm){
    float diff;
    diff=(today_parm-lstYr_parm);
    return ((diff/lstYr_parm)*100);
}

//Solutions to Problem 5
float infla(float lstYr_parm, float today_parm){
    float diff;
    diff=(today_parm-lstYr_parm);
    return ((diff/lstYr_parm)*100);
}

float futInfl(float estInf_parm, float today_parm){
        return ((estInf_parm/100)*today_parm+today_parm);
}
//Solution to Problem 6
float intrst(float inBal, float moInt, int nuMo){
  float totInt=inBal*((moInt/100)/12)*nuMo;  
  //float nuBal=inBal+(totInt+(totInt*moInt*nuMo));
  return (totInt);   
}
//Solution to Problem 7
float gravFrc(float massOne, float massTwo, float dist){
    float F;
    F=((G*massOne*massTwo)/(dist*dist));
    return (F);
}
//Solution to Problem 12
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
//Solutions for Problem 8
float cos(float aMor_par,float taxS_par){ //Function Heading
    return (aMor_par-taxS_par);
}
float tax(float ilb_par,float intrT_par,float taxS_par){ //Function Heading
    return ((ilb_par*intrT_par)*taxS_par);
}
float mor(float intr_par, float ilb_par, float intrT_par){ //Function Heading
    return ((intr_par*ilb_par)+(intrT_par*ilb_par));
}
float ilBal(float pHouse_par, float dPaymt_par){ //Function Heading
    return (pHouse_par-dPaymt_par); 
}

//Solutions for Problem 3
float tot(int whole_par,int numer_par,int denom_par){     
        return (((whole_par*static_cast<float>(denom_par))+static_cast<float>(numer_par))/static_cast<float>(denom_par));
}