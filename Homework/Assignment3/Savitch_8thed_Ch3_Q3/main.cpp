/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 5, 2014, 3:13 PM
 * Purpose: Write a program that will tell the user their horoscope.
 */

//System Library
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int month;
    int date;
    char ans;
    
    do{
    //Displayed Input Text
    cout<<"Enter your birth month (ex. January = 1, February = 2): ";
    cin>>month;
    cout<<"Enter birth date: ";
    cin>>date;
    if ((month==3&&date>=21)||(month==4&&date<=19)){
        cout<<"Aries: Bring bear repellant with you the next time you go outside.";
    }
    else if ((month==4&&date>=20)||(month==5&&date<=20)){
        cout<<"Taurus: You are not charming. You will never find love. Sorry, not sorry.";
    }
    else if ((month==5&&date>=21)||(month==6&&date<=21)){
        cout<<"Gemini: You have an incredible personality.....not.";
    }
    else if ((month==6&&date>=22)||(month==7&&date<=22)){
        cout<<"Cancer: Cancers are incredible people. Keep being amazing.";
    }
    else if ((month==7&&date>=23)||(month==8&&date<=22)){
        cout<<"Leo: You're a Leo! Congrats. That's all I have to say.";
    }
    else if ((month==8&&date>=23)||(month==9&&date<=22)){
        cout<<"Virgo: Keep being you! You awesome person, you.";
    }
    else if ((month==9&&date>=23)||(month==10&&date<=22)){
        cout<<"Libra: You're like a scale, right? Well, have fun weighing things.";
    }
    else if ((month==10&&date>=23)||(month==11&&date<=21)){
        cout<<"Scorpio: Your wit is as menacing as a puppy's barks.";
    }
    else  if ((month==11&&date>=22)||(month==12&&date<=21)){
        cout<<"Sagittarius: Good luck finding love, bro. You'll need it.";
    }
    else if ((month==12&&date>=22)||(month==1&&date<=19)){
        cout<<"Capricorn: There will be a black cloud of regret following you around tomorrow.";
    }
    else if ((month==1&&date>=20)||(month==2&&date<=18)){
        cout<<"Aquarius: You will meet a Sea Witch and become a mermaid.";
    }
    else if ((month==2&&date>=19)||(month==3&&date<=20)){
        cout<<"Pisces: Bring bear repellant with you the next time you go outside.";
    }
    else 
     {
        cout<<"Entry not valid.";
     }
    cout<<"\n";
    cout<<"\n";
    cout<<"Would you like to check another horoscope?"<<endl;
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"\n";      
    cout<<"The End"; 
    
    //QED
    
    return 0;
}