/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 5, 2014, 6:02 PM
 * Purpose: Write a program that will tell the user their horoscope compatibility.
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
    //Displayed Text: Input for Birthday
    cout<<"Enter birth month (ex. January = 1): ";
    cin>>month;
    cout<<"Enter birth date: ";
    cin>>date;
    
    if ((month==3&&date>=21)||(month==4&&date<=19)){
        cout<<"Aries: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people"<<endl;
        cout<<"that are Aries, Leo, and Sagittarius.";
    }
    else if ((month==4&&date>=20)||(month==5&&date<=20)){
        cout<<"Taurus: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Taurus, Virgo, and Capricorn.";
    }
    else if ((month==5&&date>=21)||(month==6&&date<=21)){
        cout<<"Gemini: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people"<<endl;
        cout<<"that are Gemini, Libra, and Aquarius.";
    }
    else if ((month==6&&date>=22)||(month==7&&date<=22)){
        cout<<"Cancer: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people"<<endl;
        cout<<"that are Cancer, Scorpio, and Pisces.";
    }
    else if ((month==7&&date>=23)||(month==8&&date<=22)){
        cout<<"Leo: Your Horoscope Here."<<endl;
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Aries, Leo, and Sagittarius.";
    }
    else if ((month==8&&date>=23)||(month==9&&date<=22)){
        cout<<"Virgo: Your Horoscope Here."<<endl;
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Taurus, Virgo, and Capricorn.";
    }
    else if ((month==9&&date>=23)||(month==10&&date<=22)){
        cout<<"Libra: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Gemini, Libra, and Aquarius.";
    }
    else if ((month==10&&date>=23)||(month==11&&date<=21)){
        cout<<"Scorpio: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Cancer, Scorpio, and Pisces.";
    }
    else  if ((month==11&&date>=22)||(month==12&&date<=21)){
        cout<<"Sagittarius: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Aries, Leo, and Sagittarius.";
    }
    else if ((month==12&&date>=22)||(month==1&&date<=19)){
        cout<<"Capricorn: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Taurus, Virgo, and Capricorn.";
    }
    else if ((month==1&&date>=20)||(month==2&&date<=18)){
        cout<<"Aquarius: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Gemini, Libra, and Aquarius.";
    }
    else if ((month==2&&date>=19)||(month==3&&date<=20)){
        cout<<"Pisces: Your Horoscope Here."<<endl;
        cout<<"\n";
        cout<<"You are most compatible with other people "<<endl;
        cout<<"that are Cancer, Scorpio, and Pisces.";
    }
    else 
     {
        cout<<"Invalid Entry";
     }
    cout<<"\n";
    cout<<"\n";
    cout<<"Would you like to check another horoscope?"<<endl;
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"\n";      
    cout<<"Live long and prosper.";
    
    //QED
    
    return 0;
}