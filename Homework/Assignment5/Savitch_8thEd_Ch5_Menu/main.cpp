/* 
 * File:   main.cpp
 * Author: Brynn Caddel 
 * Created on July 23, 2014, 1:23 PM
 * Purpose: Savitch 8th Edition Chapter 5 Menu 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
//Functions for Problem 1
void input1 (int& hour, int& mins);            //Input 24-hour format time
void convrt1(int& hour, int& mins, char& ampm);//Convert time to 12-hour format time
void output1(int& hour, int& mins, char& ampm);//Output 12-hour format time
//Functions for Problem 2
void input2(int& hour, int& mins); //Function parameters for input of hours/minutes
void waitT2(int& hour, int& mins); //Function parameters for wait time calculations of hours/minutes
void output2(int& hour, int& mins);//Function parameters for output time of hours/minutes
//Functions for Problem 3
void input3(int& hour, int& mins); //Function parameters for hour and minutes in Input Function
void wait3(int& hour, int& mins);  //Function parameters for hour and minutes in Wait Function
void twelve3(int& hrs, int& mins, char& ampm); //Function parameters for hours, minutes, and AM/PM in Twelve Function
void output3(int& hour, int& mins, char& ampm);//Function parameters for hours, minutes, and AM/PM in Output Function
//Functions for Problem 4
void inScore4(float& score1, float& score2, float& score3, float& score4);   //Function parameters for input scores
void calcScr4(float&score1, float& score2, float& score3, float& score4, float& avg, float& stdDev); //Calculate score
void outScore4(float& avg, float& stdDev);            //Function parameters for for output Score
//Functions for Problem 6
void input6 (float& feet, float& inch);          //Function parameters for input of feet/inches
void cnvrsn6(float& feet, float& inch, float& meters, float& cenmtrs);   //Function parameters for conversions
void output6(float& feet, float& inch, float& meters, float& cenmtrs);   //Function parameters for output of feet/inches and meters/centimeters
//Functions for Problem 7
void input7(float& lngth1, float& lngth2, int& pick);   //Function parameters for length1,length2, and pick
void calc7(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a); //Function parameters for length1(a),length2(a))
void output7(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a); //Function parameters for length1(a),length2(a))
//Functions for Problem 9
void input9(float& pound, float& ounce);     //Function Parameters pounds/ounces in Input Function
void cnvrt9(float& pound, float& ounce, float& kg, float& g);//Function Parameters for pounds/ounces/grams in Conversion Parameter
void output9(float& pound, float& ounce, float& kg, float& g);//Function Parameters for pounds/ounces/grams in Output Parameter
//Functions for Problem 10
void input10(float& mass1, float& mass2, int& pick); //Function parameters for mass1, mass2, and pick in Input Function
void calc10(float& mass1, float& mass2, float& mass2a, float& mass1a);//Function parameters for mass 1,mass2, and mass1a in Calculation Function
void output10(float& mass1, float& mass2, float& mass2a, float& mass1a);//Function parameters for mass1,mass2,mass2a,mass1a in Output Function
//Functions for Problem 13
void input13(float& a, float& b, float& c);//Function parameters for side lengths a,b,c in Input Function
void calc13(float& a, float& b, float& c, float& s, float& area, float& p);//Function parameters for Calculation Function
void output13(float& area, float& p); //Function parameters for area and perimeter in Output Function  
//Functions for Problem 14
void input15(float& wspd, float& temp); //Function parameter for wind speed and temperature in INput Function
void calc15(float& wspd, float& temp, float& windch);//Function parameter for wind speed, temperature, and windchill in Calculations Function
void output15(float& windch);//Function parameters for windchill in the Output Function

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl;
    cout<<"1. Savitch 8th Edition Chapter 5 Problem 1"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 5 Problem 2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 5 Problem 3"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 5 Problem 4"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 5 Problem 6"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 5 Problem 7"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 5 Problem 9"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 5 Problem 10"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 5 Problem 13"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 5 Problem 15"<<endl;
    cout<<"Enter your selection: ";
    cin>>choose;
    //Utilize switch to implement the menu
    switch(choose){
        case 1:{
            //Declare Variables
            int hour, mins;     //Hours and Minutes the User Inputs
            char ampm, ans;     //AM, PM, and Answer for User Input
            do{
            //Function Call       
            input1 (hour, mins);         //Calling Input Function
            convrt1(hour, mins, ampm);   //Calling Conversion Function
            output1(hour, mins, ampm);   //Calling Output Function
            cout<<"Would you like to perform the conversion again?\n"; //Gives user the option to do another conversion
            cout<<"Enter Y for yes, N for no: ";
            cin>>ans;
            cout<<"\n";
            }while (ans=='y'||ans=='Y');    //If anything other than Y, program exits
            //QED
            break;
        }
        case 2:{
            //Declare Variables
            int hour, mins;         //Hours and Minutes that the User will Input
            char ans;               //Answer for User to proceed with the program
            do{
            //Function Call    
            input2(hour, mins);      //Calling the Input Function
            waitT2(hour, mins);      //Calling the Wait Time Function
            output2(hour, mins);     //Calling the Output Function
            cout<<"Would you like to recalculate your wait time?\n"; //Gives the user the option to calculate another wait time
            cout<<"Enter Y for yes, N for no: ";
            cin>>ans;
            cout<<"\n";
            }while(ans=='y'||ans=='Y');  //Anything other than Y will exit the program
            //QED
           break;
        }
        case 3:{
            //Declare Variables
            int hour, mins;             //Hours and Minutes
            char ans;                   //Ans allows the user to proceed with the 
            char ampm;                  //AM and PM
            do{
            //Function Call    
            input3(hour, mins);          //Calls the Input Function
            wait3(hour, mins);           //Calls the Wait Function
            twelve3(hour, mins, ampm);   //Calls the Twelve Function
            output3(hour, mins, ampm);   //Calls the Output Function
            cout<<"Would you like to recalculate your wait time?\n";
            cout<<"Enter y for yes, n for no: "; //Allows the user to perform another calculation
            cin>>ans;
            cout<<"\n";                         //Anything other than Y exits the program
            }while(ans=='y'||ans=='Y');
            //QED
            break;
        }
        case 4:{
            //Declare Variables
            float score1, score2, score3, score4, avg, stdDev;     //Input for scores 1-4, average of tests, and standard deviation
            char ans;                                              //Allows user to proceed with program
            do{
            //Function Call
            inScore4(score1, score2, score3, score4);        //Calls Input Score Function
            calcScr4(score1, score2, score3, score4, avg, stdDev); //Calls Calculation Function
            outScore4(avg, stdDev);                          //Calls Output Score Function
            cout<<"Would you like to calculate the average and standard deviation of another four scores?\n";
            cout<<"Enter Y for yes, N for no: ";  //Allows the user to perform another calculation
            cin>>ans;
            cout<<"\n";
            }while (ans=='y'||ans=='Y');          //Anything other than Y exits the program
            //QED
            break;
        }
        case 5:{
            //Declare Variables
            float feet, inch, meters, cenmtrs;  //Feet, inches, meters, centimeters
            char ans;                           //Allows the user to proceed with the program
            do{
            //Function Call
            input6(feet, inch);                  //Calls the Input Function
            cnvrsn6(feet, inch, meters, cenmtrs);//Calls the Conversion Function
            output6(feet, inch, meters, cenmtrs);//Calls the Output Function
            cout<<"Would you like to convert another length?\n";
            cout<<"Enter y for yes, n for no: ";    //Gives the user the option to perform the conversion again
            cin>>ans;
            }while (ans=='y'||ans=='Y');            //Anything other than Y will end the program
            //QED
            break;
        }
        case 6:{
             //Declare Variables
            float lngth1, lngth2, lngth1a, lngth2a;   //Lengths 1&2 are used for Meters, Lengths 1a&2a are used for Centimeters
            int pick;                                 //Allows the user to pick between converting meters or centimeters
            //Function Call
            input7(lngth1, lngth2, pick);              //Calls Input Function
            calc7(lngth1, lngth2, lngth2a, lngth1a);   //Calls Calculation Function
            output7(lngth1, lngth2, lngth2a, lngth1a); //Calls Output Function
            //QED
            break;
        }
        case 7:{
            //Declare Variables
            float pound, ounce, kg, g;  //Pounds, Ounces, Kilograms, and Grams
            //Function Call
            input9(pound, ounce);       //Call Input Function
            cnvrt9(pound, ounce, kg, g);//Call Conversion Function
            output9(pound, ounce, kg, g);//Call Output Function         
            //QED
            break;
        }
        case 8:{
            //Declare Variables
            float mass1, mass2;         //Initial masses that are inputted by the user
            float mass2a, mass1a;       //Converted masses that are outputted after conversion
            int pick;                   //Allows the user to pick between conversion
           //Function Call
           input10(mass1, mass2, pick);       //Call Input Function
           calc10(mass1, mass2, mass2a, mass1a);  //Call Calculation Function
           output10(mass1, mass2, mass2a, mass1a);  //Call Output Function
            //QED
            break;
        }
        case 9:{
            //Declare Variables
            float a, b, c, s, p, area;  //Side Lengths a, b, c, semiperimeter, perimeter, and area
            //Function Call
            input13(a, b, c);           //Calls Input Function
            calc13(a, b, c, s, area, p);//Calls Calculation Function
            output13(area, p);         //Calls Output Function
            //QED
            break;
        }
        case 10:{
            //Declare Variables
            float wspd, temp, windch;  //Wind speed, temperature, and windchill
            char ans;                  //Allows the user to proceed with the program
            do{
            //Function Call
            input15(wspd, temp);  //Calls Input Function
            calc15(wspd, temp, windch);//Calls Calculation Function
            output15(windch);         //Calls Output Function
            cout<<"Would you like to recalculate your Wind Chill?\n";
            cout<<"Enter y for yes, n for no: "; //Allows the user to do another calculation for windchill
            cin>>ans;
            }while (ans=='y'||ans=='Y');        //Anything other than Y exits the program
            //QED
            break;
        }
        default:{
            cout<<"Sorry, that's not an option."<<endl;
        }
    }
    //QED
    return 0;
}

//Functions for Problem 1
//Function for 24 Hour Input Time
void input1(int& hour, int& mins){
    cout<<"Enter your 24 hour format time. Hours then minutes."<<endl;
    cout<<"H: ";
    cin>>hour;
    cout<<"M: ";
    cin>>mins;
    cout<<endl;
    cout<<"You have entered the 24-hour format time of: ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins<<endl;}
//End of 24 Hour Input Time Function
//Start of Conversion Function
void convrt1(int& hour, int& mins, char& ampm){  
    //The main purpose of this function is to assign AM and PM to the converted time
    if (hour>12&&hour<=23){     //If hours are between 12-23
        hour=hour-12;
        ampm='P';               //It wouldn't let me have a multi-character constant so I only put "P/A"
    }else if (hour==12){        //Then below in the output function I included the "M" that is to be added to the end of the sentence
        ampm='P';
    }else if(hour==0){          //Makes 0 equivalent to 12 ex: input=0 output=12
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){ //If hours are between are between 0-12
        ampm='A';
    }else if(hour<=24||mins>59){  //Used for invalid entries that don't fit 24 hour clock
        cout<<"\n";
        cout<<"Sorry that was not a valid entry! Please try again.";
    }
//End of Conversion Function
}    
//Start of Output Time Function
void output1(int& hour, int& mins, char& ampm){
    cout<<endl;
    if(hour<=12&&mins<=59){         //This accounts for the fact that the 12-hour clock 
    cout<<"The 12-hour format is "; //and 24-hour clock are the same up until 12, so it doesn't convert anything if the hour<=12
    cout<<hour<<":"<<setw(2)<<setfill('0')<<mins<<" "<<ampm<<"M"<<endl; 
    }
//End of Output Time Function
}

//Function for Problem 2
//Beginning of the Input Function Definition
void input2(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
//End Input Function Definition
}
//Begin Wait Time Function Definition
void waitT2(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    }    
//End Wait Time Function Definition
}
//Start Output Time Function Definition
void output2(int& hour, int& mins){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" hours after your wait.\n";
//End Output Time Function Definition
}


//Function for Problem 3
//Begin Input Function Definition
void input3(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";     //Allows the user to input hours and wait time
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}//End Input Function Definition
//Start Wait Function Definition
void wait3(int& hour, int& mins){
    if (mins>59){       //performs calculations for wait time
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    } 
}//End Wait Function Definition
//Start Twelve Function Definition
void twelve3(int& hour, int& mins, char& ampm){
    if (hour>12&&hour<=23){
        hour=hour-12;           //Assigns PM/AM to converted times
        ampm='P';
    }else if (hour==12){
        ampm='P';
    }else if(hour==0){
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){
        ampm='A';
    }else if(hour>=24||mins>59){    //Tells the user their entry wasn't valid
        cout<<"\n";
        cout<<"This was not a valid entry! Please try again.";
    }
}//End Twelve Function Definition
//Start Output Function Definition
void output3(int& hour, int& mins, char& ampm){
    cout<<"The time will be ";      //Outputs calculated wait time
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" "<<ampm<<"M after your wait.\n";
}//End Output Function Definition

//Function for Problem 4
//Start of Input Score Function
void inScore4(float& score1, float& score2, float& score3, float& score4){
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
void calcScr4(float& score1, float& score2, float& score3, float& score4, float& avg, float& stdDev){
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
void outScore4(float& avg, float& stdDev){
    cout<<"Your average score is ";  //Output the standard deviation that was calculated in the function above
    cout<<avg;
    cout<<"\n";
    cout<<"The standard deviation of the four scores is ";
    cout<<stdDev;
    cout<<"\n";
}//End of Output Function


//Function for Problem 6
//Beginning of Input Function Definition
void input6(float& feet, float& inch){
    cout<<"\n";
    cout<<"Convert your length from feet and inches to meters and centimeters.\n";
    cout<<"Enter your length in two parts, feet then inches.\n\n";
    cout<<"Feet: ";    //Allows the User to input feet and inches
    cin>>feet;
    cout<<"Inches: ";
    cin>>inch;     
    cout<<"\n";
    cout<<"You entered "<<feet<<"\'"<<inch<<"\"";
    cout<<"\n";
}//End of Input Function Definition
//Start of Conversion Function Definition
void cnvrsn6(float& feet, float& inch, float& meters, float& cenmtrs){
        feet=feet+(inch/12);   //feet is feet plus the inches divided by 12
        meters=feet*0.3048;    //multiples feet by .3048, converting feet to meters
        cenmtrs=meters*100;    //multiplies meters by 100, converting meters to centimeters
}//End of Conversion Function Definition
//Start of Output Function Definition
void output6(float& feet, float& inch, float& meters, float& cenmtrs){
    cout.setf(ios::fixed);          //Makes the output look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"\n";
    cout<<"Your length in meters: "<<meters<<" meters"<<endl;
    cout<<"Your length in centimeters: "<<cenmtrs<<" centimeters"<<endl;
    cout<<"\n";
//End of Output Function Definition
}

//Function for Problem 7
//Begins Input Function Definition
void input7(float& lngth1, float& lngth2, int& pick){
    cout<<"Convert your length from meters or centimeters to feet and inches.\n";
    cout<<"Enter 1 for meters, 2 for centimeters: ";
    cin>>pick;                      //Allows the user to pick between converting meters of centimeters
    if(pick==1){                    //If 1, converts meters
        cout<<"\n";
        cout<<"Enter your length, in meters: ";
        cin>>lngth1;
    }else if (pick==2){             //If 2, converts centimeters
        cout<<"\n";
        cout<<"Enter your length, in centimeters: ";
        cin>>lngth2;
    }
//End Input Function Definition
}
//Start Calculation Function Definition
void calc7(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a){
    float cnvrtft=0.3048;               //.3048 is used in the meters conversion
    float cnvrtmt=100;                  //100 is used to convert meters to centimeters
    lngth1=lngth1/cnvrtft;              //length1 = length1 divided by .3048
    lngth2=(lngth2/100)/cnvrtft;        //length2 = length2 divided by 100 and then divided by .3048
    lngth1a=lngth1*12;                  //the lengths are then multiplied by 12 to convert to feet
    lngth2a=lngth2*12;
}//End Calculation Function Definition
//Start Output Function Definition
void output7(float& lngth1, float& lngth2, float& lngth2a, float& lngth1a){
    cout.setf(ios::fixed);          //Makes the output look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(lngth2==0&&lngth2a==0){      //Outputs centimeter to feet conversion
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth1<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth1a<<" inches.";
        cout<<"\n";
    }else if (lngth1==0&&lngth1a==0){   //Outputs meter to feet conversion
        cout<<"\n";
        cout<<"Your measurement converts to "<<lngth2<<" feet";
        cout<<"\n";
        cout<<"or "<<lngth2a<<" inches.";
        cout<<"\n";
    }
//End Output Function Definition
//End Function Definitions
}


//Function for Problem 9
//Begin Input Function Definition
void input9(float& pound, float& ounce){
    cout<<"Enter your weight in pounds and then ounces.\n";
    cout<<"Pounds(lbs): ";  //Collects pounds and ounces from user input
    cin>>pound;
    cout<<"Ounces(oz): ";
    cin>>ounce;
    cout<<"\n";
}//End Input Function Definition
//Start Conversion Function Definition
void cnvrt9(float& pound, float& ounce, float& kg, float& g){
    pound=pound+(ounce/16); //Pounds is equal to pounds + ounces divided by 16
    kg=(pound/2.2046);      //converts kilograms by dividing pounds by 2.2046
    g=kg*1000;              //grams is equal to kilograms multiplied by 1000
//End Conversion Function Definition           
}//Starts Output Function Definition
void output9(float& pound, float& ounce, float& kg, float& g){
    cout.setf(ios::fixed);      //Makes everything look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your weight has been converted to the following units. \n";
    cout<<"kilograms: ";        //Outputs conversions
    cout<<kg;
    cout<<"\n";
    cout<<"grams: ";
    cout<<g;
    cout<<"\n";
}//End Output Function Definition


//Function for PRoblem 10
//Begin Input Function Definition
void input10(float& mass1, float& mass2, int& pick){
    cout<<"\n";
    cout<<"Convert your mass from kilograms or grams to pounds and ounces.\n";
    cout<<"Enter 1 for kilograms, 2 for grams: ";
    cin>>pick;
    if(pick==1){            //Allows for the user to convert mass to kilograms if they pick 1
        cout<<"\n";
        cout<<"Enter your mass, in kilograms: ";
        cin>>mass1;
    }else if (pick==2){     //Allows for the user to convert mass to grams if they pick 2
        cout<<"\n";
        cout<<"Enter your mass, in grams: ";
        cin>>mass2;
    }
}//End Input Function Definition
//Start Conversion Function Definition
void calc10(float& mass1, float& mass2, float& mass2a, float& mass1a){
    float cnvrtlb=2.2046;       
    float cnvrtkg=1000;
    mass1=mass1*cnvrtlb;        //mass1 is the product of mass1 and 2.2046
    mass1a=mass1*16;            //mass1a is the product of mass1 and 16
    mass2=(mass2/cnvrtkg)*cnvrtlb;//mass2 is the quotient of mass 2 and 1000 then multiplied by 2.2046
    mass2a=mass2*16;            //mass2a is the product of mass2 and 16
//End Conversion Function Definition           
}//Starts Output Function Definition
void output10(float& mass1, float& mass2, float& mass2a, float& mass1a){
    cout.setf(ios::fixed);          //Makes the output look pretty
    cout.setf(ios::showpoint);
    cout.precision(2);
    if(mass2==0&&mass2a==0){        //Outputs conversions
        cout<<"\n";
        cout<<"Your mass converts to "<<mass1<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass1a<<" ounces.";
        cout<<"\n";
    }else if (mass1==0&&mass1a==0){
        cout<<"\n";
        cout<<"Your mass converts to "<<mass2<<" pounds";
        cout<<"\n";
        cout<<"or "<<mass2a<<" ounces.";
        cout<<"\n";
    }//End Output Function Definition
//End Function Definitions
}

//Function for Problem 13
//Begin Input Function Definition
void input13(float& a, float& b, float& c){
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
void calc13(float& a, float& b, float& c, float& s, float& area, float& p){
    s=((a+b+c)/2);      //Heron's Formula used to find semiperimeter
    area=sqrt(s*(s-a)*(s-b)*(s-c));//Heron's Formula again
    p=a+b+c;            //Perimeter is the sum of all the side lengths
//End Calculation Function Definition           
}//Starts Output Function Definition
void output13(float& area, float& p){
    cout.setf(ios::fixed);          //Makes everything looks pretty
    cout.setf(ios::showpoint);      
    cout.precision(2);              //Outputs calculations
    cout<<"Area of the rectangle is "<<area<<" units and its perimeter is "<<p<<" units."<<endl;
    }
//End Output Function Definition


//Function for Problem 15
//Begin Input Function Definition
void input15(float& wspd, float& temp){
    do{
    cout<<"Calculate Windchill in your area in temperatures below 50 degrees Fahrenheit.\n";
    cout<<"If the temperature entered is over 50 degrees Fahrenheit the program will start again.\n";
    cout<<"Enter the following required information.\n";
    cout<<"Wind Speed(mph): ";      //Collects wind speed and temperature from the user
    cin>>wspd;
    cout<<"Temperature(F): ";
    cin>>temp;
    cout<<"\n";
    }while (temp>=51);      //Ensures that the temperature input by the user isn't below 50 degrees Fahrenheit
}//End Input Function Definition
//Start Calculation Function Definition
void calc15(float& wspd, float& temp, float& windch){
    //Wind Chill Formula found from National Weather Service Online (because Savitch was too lazy to give it to us))
    windch=35.74+(0.6215*temp)-(35.75*pow(wspd,0.16))+(0.4275*temp*pow(wspd,0.16));
//End Calculation Function Definition           
}//Starts Output Function Definition
void output15(float& windch){
    cout.setf(ios::fixed);      //Makes the output look pretty
    cout.precision(0);
    cout<<"\n";
    cout<<"Your Wind Chill temperature is ";
    cout<<windch;
    cout<<" degrees Fahrenheit.\n";
}//End Output Function Definition