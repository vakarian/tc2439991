/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 25, 2014, 5:20 PM
 * Project 2 - Tic-Tac-Toe Game - CSC5 46023
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=3;               //3 columns since tic-tac-toe is 3x3

//Function Prototype
void welcome();
int read1();
int read2();
void announce(unsigned short &,unsigned short &);
void write1(int);
void write2(int);
void dispBrd(char[][COLS],int);
char turnChk(int,char ,unsigned short &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short xWin, oWin;              //Counts the wins for X and O
    char ans;                               //Allows the user to proceed with the program
    do{
        //Declare Variables
        unsigned short player = 1, turn = 1;//Initialize the game
        bool gameover = false, gamewin = false;
        char move;
        //Char type for the game board
        char a = '1';
        char b = '2';
        char c = '3';
        char d = '4';
        char e = '5';
        char f = '6';
        char g = '7';
        char h = '8';
        char i = '9';
        char sign;
        //Welcome Message
        welcome();                       //Calls Welcome Function
        //Read from data file
        xWin = read1();
        oWin = read2();
        //Announces Number of Times X and O Have Won Since Game Began
        announce(xWin,oWin);
        //Initialize the game 
        char board[3][3] = {{'7','8','9'},//3x3 array is going to make the board look pretty
                            {'4','5','6'},
                            {'1','2','3'}};
        
        do{
            
            dispBrd(board,3);             //Display the board using a two-dimensional array
            
            turn++;                       //Increment the turn to start the game
            
            sign = turnChk(turn,sign,player);
            
            if (sign == 'X'){
                player=1;
            }else player=2;
        
            //Player inputs moves
            cout<<endl;
            cin>>move;
    
        //Determines if move is valid
        if(move == '1' && a == '1') {
                a = sign;
                board[2][0] = sign;
        }else if(move == '2' && b == '2') {
                b = sign;
                board[2][1] = sign;
        }else if(move == '3' && c == '3') {
                c = sign;
                board[2][2] = sign;
        }else if(move == '4' && d == '4') {
                d = sign;
                board[1][0] = sign;
        }else if(move == '5' && e == '5') {
                e = sign;
                board[1][1] = sign;
        }else if(move == '6' && f == '6') {
                f = sign;
                board[1][2] = sign;
        }else if(move == '7' && g == '7') {
                g = sign;
                board[0][0] = sign;
        }else if(move == '8' && h == '8') {
                h = sign;
                board[0][1] = sign;
        }else if(move == '9' && i == '9') {
                i = sign;
                board[0][2] = sign;
        }else{  //Use if input is not valid
        cout << "Sorry, that was not a valid move. Please enter a valid move." << endl;
        turn--; //Decrement 1 turn to compensate for invalid moves
        }
    
        //How to determine a win
        if(a == sign && b == sign && c == sign){      //Check if a,b,and c are in a line
            gamewin = true;
        }else if(d == sign && e == sign && f == sign){//Check if c,e,and f are in a line
            gamewin = true;
        }else if(g == sign && h == sign && i == sign){//Check if g,h,and i are in a line
            gamewin = true;
        }else if(a == sign && d == sign && g == sign){//Check if a,d,and g are in a line
            gamewin = true;
        }else if(b == sign && e == sign && h == sign){//Check if b,e,and h are in a line
            gamewin = true;
        }else if(c == sign && f == sign && i == sign){//Check if c,f,and i are in a line
            gamewin = true;
        }else if(a == sign && e == sign && i == sign){//Check if a,e,and i are in a line
            gamewin = true;
        }else if(c == sign && e == sign && g == sign){//Check if c,e,and g are in a line
            gamewin = true;
        }else if(a != '1' && b != '2' && c != '3' && d != '4' && e != '5' &&
                 f != '6' && g != '7' && h != '8' && i != '9'){
            gamewin = false;    //Draw means no one wins the game
            gameover = true;    //Game over
        }else gamewin = false;  //Loop the check winning condition until draw or one wins
        
        //End the game if a player won and display result
        if(gamewin == true){
            cout<<endl;
                 //Display the ending placement of the game
                 cout<<g<<" | "<<h<<" | "<<i<<endl;   //Display the winning board
                 cout<<"-----------"<<endl;
                 cout<<d<<" | "<<e<<" | "<<f<<endl;
                 cout<<"-----------"<<endl;
                 cout<<a<<" | "<<b<<" | "<<c<<endl;
                 cout<<endl;
                 cout<<endl;
                 cout<<"Player "<<player<<" won!"<<endl;//Display which player won
                 cout<<endl;
                 
                 if(player == 1){
                     xWin++;       //Increment the win count
                     write1(xWin);
                 }
                 if(player == 2){ 
                     oWin++;       //Increment the win count
                     write2(oWin);
                 }
                 gameover = true;  //Game is over
                 
        }else if(gameover == true && gamewin == false){//Game over and no one wins
                 cout<<endl;
                 cout<<g<<" | "<<h<<" | "<<i<<endl;    //Display the  board
                 cout<<"-----------"<<endl;
                 cout<<d<<" | "<<e<<" | "<<f<<endl;
                 cout<<"-----------"<<endl;
                 cout<<a<<" | "<<b<<" | "<<c<<endl;
                 cout<<endl;
                 cout<<endl;
                 cout<<"Draw! No one wins."<<endl;     //Displayed if game is a draw
        }
  
            }while(gameover == false);                 //Loops the game until game is over
            //Files that keep track of winnings
            xWin = read1();                            //Read from xwin.dat        
            oWin = read2();                            //Read from owin.dat
            announce(xWin,oWin);
            cout<<"Do you want to repeat?"<<endl;      //Asks if the user would like to repeat the game
            cin>>ans;                                  //Gets answer from user
    }while(ans == 'y'||ans == 'Y');
    //QED
    return 0;
}

//Function Definitions
void dispBrd(char array[][COLS],int size){
    
    for (int x=0; x<size; x++)
    {
        cout<<endl;
        for (int y=0;y<size;y++)
        {
            cout<<setw(2)<<array[x][y]<<setw(2);  //This draws the grid
            cout<<setw(2);
        }
        cout<<endl;
    }
    cout<<endl;
}

char turnChk(int turn,char sign,unsigned short &player ){
        if(turn%2 == 0) {//If the turn is multiples of 2,then it'll be player 1's turn.
        sign = 'X';      //assigns player 1 = X
        player = 1;      //Player 1's turn
        cout<<endl;
        cout<<endl;
        cout<<"Player "<<player<<"'s turn to play."<<endl;
        cout<<"Please enter the number to place your sign."<<endl;
        cout<<"You are "<<sign<<endl;   //Reminding the player about their sign (X or O))
    }else{ 
        sign = 'O';     //assigns player 2 = O
        player = 2;     //player 2's turn
        cout<<endl;
        cout<<endl;
        cout<<"Player "<<player<<"'s turn to play"<<endl;
        cout<<"Please enter the number to place your sign."<<endl;
        cout<<"You are "<<sign<<endl;   //Reminding the player about their sign
    }
        return sign;  //Return sign to be used to determine a move's validity
}

int read1(){
    //Declare Variables
    ifstream input;
    int num;
    //Open the file
    input.open("Xwin.dat");
    //Read tData
    input>>num;
    //Close the file
    input.close();
    //Exit
    return num;  
}

int read2(){
    //Declare Variables
    ifstream input;
    int num;
    //Open the file
    input.open("Owin.dat");
    //Read Data
    input>>num;
    //Close the file
    input.close();
    //Exit
    return num;  
}

void write1(int xWin){
    ofstream Xwin;
    //Open the file
    Xwin.open ("Xwin.dat",ios::out);
    //Record the data
    Xwin<<xWin;
    //Close the file
    Xwin.close();        
}

void write2(int oWin){
    ofstream Owin;
    //Open the file
    Owin.open ("Owin.dat",ios::out);
    //Record the data
    Owin<<oWin;
    //Close the file
    Owin.close();        
}

void announce(unsigned short &xWin ,unsigned short &oWin){
    cout<<"Player 1 has won "<<xWin<<" times since the game was created."<<endl;
    cout<<"Player 2 has won "<<oWin<<" times since the game was created."<<endl;
}

void welcome(){
    cout<<"Let's play Tic-Tac-Toe!"<<endl;
    cout<<endl;
    cout<<"Rules: Two players, X and O, take turns marking the spaces in a 3x3 grid."<<endl;
    cout<<"The player who succeeds in placing three respective marks in a horizontal,"<<endl;
    cout<<"vertical, or diagonal row wins the game. "<<endl;
    cout<<endl;
    cout<<"Player 1 will start with X."<<endl;
    cout<<endl;
}
//End Function Definitions