/*     
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 24, 2014, 12:56 PM
 * Purpose: Make-up Work
 */

//System Libraries
#include <cstdlib>  
#include <iostream> 
#include <fstream>  
#include <ctime>    
#include <iomanip>  
#include <cmath>    
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    bool exitMnu=false;
    //Loop Until Exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Gaddis 6th Edition Chapter 4 Problem 3"<<endl;
        cout<<"2. Gaddis 6th Edition Chapter 4 Problem 4"<<endl;
        cout<<"3. Gaddis 6th Edition Chapter 4 Problem 7"<<endl;
        cout<<"4. Gaddis 6th Edition Chapter 4 Problem 9"<<endl;
        cout<<"5. Gaddis 6th Edition Chapter 4 Problem 11"<<endl;
        cout<<"6. Gaddis 6th Edition Chapter 5 Problem 7"<<endl;
        cout<<"7. Gaddis 6th Edition Chapter 5 Problem 1"<<endl;
        cout<<"8. Gaddis 6th Edition Chapter 5 Problem 21"<<endl;
        cout<<"9. Gaddis 6th Edition Chapter 5 Problem 23"<<endl;
        cout<<"Enter Anything Else To Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
                 case 1:{    
                        //Variable Declaration and Initialization
                        int num, fact=1, i=0, counter;
                        //Displayed Text to User
                        cout<<"Enter a number, and the computer will tell you that numbers factorial.\n";
                        cin>>num;
                        //Determines factorial
                        if ( num < 0){
                            cout << "Please enter a positive number.\n";
                            cin >> num;
                        }        
                        while (i++ < num){
                           fact *=i == 0 ? 1 : i;
                        }
                        //Displayed Output Text
                        cout <<"The factorial of" << num << " is " << fact;
                        cout <<"\n";        
                        break;
            }
                case 2:{  
                        //Variable Declaration
                        float hrs, rate, salary;
                        //Displayed Text to User
                        cout << "How many hours did you work this week?\n"
                             << "Note: If you work more than 40 hrs, you will be payed time-and-a-half for any hours after 40.\n";
                        cin  >> hrs;
                        //If hours are less than 40
                        while ( hrs!=-1){
                        if ( hrs > 40 ){
                            cout << "What is your hourly rate?\n";
                            cin >> rate;
                            salary = 40.0 *rate + (hrs -40.0)* rate * 1.5;
                            cout<< "Your salary is $"<< salary << "\n";
                        } 
                        //If hours are more than 40
                        if (hrs <= 40){                   
                            cout << "What is your hourly rate?\n";
                            cin >> rate;
                            salary = rate*hrs;
                            cout<< "Your salary is $"<< salary << "\n";
                        }
                break;
            }
            case 3:{
                //Variable Declaration:
                int lrgstnum, num2,x=0,secondlrgst=0;
                //Asks user to input integers
                cout << "This program first asks you to input 10 integers.\n";
                cout << "It then tells you what largest and second largest number is.\n";
                cout << "Enter a first number:";
                cin  >> lrgstnum;
                         do {
                            cout << "Enter the next number.\n";
                            cin>> num2;
                            //Determines largest number
                            if (num2>lrgstnum){
                                secondlrgst=lrgstnum;
                                lrgstnum=num2;
                                }
                            else if (num2> secondlrgst)
                                secondlrgst =num2;
                            } while (x++ <= 7 );  
                            //Output Text
                            cout << "\nThe largest number is "<< lrgstnum<< endl; 
                            cout << "The second largest number is "<< secondlrgst<< endl; 
                break;
            }
            case 4:{ 
                    //Variable Declaration       
                    float gallons, avg;
                    float miles, totGal, totMiles;
                    //Displayed Text
                    cout << "How many gallons did you use this month?(Enter -1 to end program)\n";
                    cin >> gallons;
                    while (gallons != -1){
                         totGal+= gallons;
                    //Asks user various question about mileage
                    cout << "How many miles did you drive this month ?\n";
                    cin >> miles;
                    totMiles +=miles;
                    cout << "The miles per gallon for this month is " << miles/gallons << '.'<< endl<< endl;
                    cout << "How many gallons did you use this month?(Enter -1 to end program)\n";
                    cin >> gallons;
                    }
                    avg = totMiles/ totGal;
                    //Displayed Output Text
                    cout << endl << "The average miles per gallon of all the months is " << avg;
                    cout << "\n";
                break;
            }
                    case 5:{
                         //Variable Declaration and Initialization
                        int num, fact=1, i=0, counter;
                        //Displayed Text to User
                        cout<<"Enter a number, and the computer will tell you that numbers factorial.\n";
                        cin>>num;
                        //Determines factorials
                        if ( num < 0){
                            cout << "Please enter a positive number.\n";
                            cin >> num;
                        }        
                        while (i++ < num){
                           fact *=i == 0 ? 1 : i;
                        }
                        //Displayed Output Text
                        cout <<"The factorial of" << num << " is " << fact;
                        cout <<"\n";  
                break;
            }
            case 6:{
                            //Variable Declaration
                            int num, newnum, total = 0, sum = 0; 
                            cout << "Enter a positive, whole number, and the computer will add all of the numbers that come before that number.\n";
                            cin >> num;
                            //Checks for negative numbers.
                            while ( num < 0){
                                cout << "The number you have entered is not a positive number. Please follow instructions, and try again. \n";
                                cin >> num;
                            }
                            //Adds the numbers from 1 up to the  number the user chooses
                            for ( int i= 1 ; i <= num  ; i++  ){
                            sum = sum + i ;
                            }
                            cout << "The sum from 1 up to the number you chose is : " << sum << endl;      
                            cout <<"\n";
                break;
            }
            case 7:{
                //Variable Declaration and Initialization      
                float num, i=0;
                //Displayed Text to User
                cout << "Enter a number, and the computer will multiply and print that number by two until the number exceeds 50.\n";
                cin >> num;
                //Calculations
                    while (i++<=50){
                    num= num*2;
                //Output Text
                cout << num << " "; }
                break;
            }
            case 8:{
                cout << "This program displays the following set of numbers: 0, 10, 20, 30, 40, 50 . . . 1000 using the for repetition structure.\n\n\n";
                for (int i=0; i<=1000; i+=10)
                cout << i << " ";
                cout <<"\n";
                break;
            }
             case 9:{
                    //Declare Variables
                    int fi,fim1,fim2;
                    int term, cndStop;
                    //Initialization of Variables
                    fim1=10;
                    fim2=10;
                    fi=fim1+fim2;
                    term =3;
                    //Input the term to stop the sequence
                    //sequence
                    cout <<"How many terms in the Fibonacci";
                    cout <<"sequence will you like to calculate?"<< endl;
                    cin >> cndStop;
                    //Print out the initial terms
                    cout << "Fibonacci Sequence = " << fim2 <<", "<< fim1 << ", " << fi << ", ";
                    // Loop through the sequence
                        do {
                        fim2=fim1;
                        fim1=fi;
                        fi=fim1+fim2;
                        //output the next term 
                        if (term<cndStop-1)cout << fi <<", ";
                            else cout <<fi;
                        }while (++term<cndStop);
                break;
             }
            default: exitMnu=true;
           }
        }
    }while(!exitMnu);
    //QED
    return 0;
}

