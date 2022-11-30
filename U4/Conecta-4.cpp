/*
Date: 23/11/2022
Author: Samuel Salvador Soto Torres
        Jorge Emilio Santacruz Morales
        Osiris Olimpia Martinez 

Description: Conect 4
*/

/*  BOARD

  1   2   3   4   5   6   7
|   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |  
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |  
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |  


*/

#include <iostream>
#include <string.h>


using namespace std;

//MAIN FUNCTIONS OF THE CODE
int mainMenu();//Osiris
void makeBoard();//Jorge
int selectPlay();//Samuel
bool checkPlay();//samuel
void playGame();//Jorge
void gotoxy(int x,int y);
void instructions();
void placeTabOn();
void matrixCPU();

int turnPlayer=1;
int gameArea[7][7];
char gameplayAreaCPU[7][7];

//NO DELETE
const string CPU = "machine";
const string human = "human";
const string realBoard = "real";
const string imaginaryBoard = "imaginary";


// funcion principal 
 int main(){

    instructions();
    mainMenu();
    gotoxy(1,2);makeBoard();
    playGame();placeTabOn();

 }

//FUNCTION THAT CREATES THE BOARD OF THE GAME


void makeBoard(){

    int row,col,x=0,y=0;

    cout<<"  1    2    3    4    5    6    7    "<<endl;

    for (row=0;row<=8;row++){
        
        for(col=0;col<=28;col++){

            if(col==0||col==4||col==8||col==12||col==16||col==20||col==24||col==28){
                cout<<"\033[0;34m"<<"|"<<"\033[o";
            }
            else if(col==3||col==7||col==11||col==15||col==19||col==23||col==27){

                
                x++;

            }
            else {
                cout<<"  ";
            }
        }

        cout<<endl;

       
    }

}

void placeTabOn (){
    char characterPlay;

    if (turnPlayer % 2 == 0)
    {
        characterPlay = 'X';
    }
    else{
        characterPlay = 'O';
    }
    
}

//FUNCTION THAT STARTS THE GAME DEPENDING ON THE OPTION OF MODE GAME 
void playGame(){
    bool winner=false;
    int option=0,play=0;
    option=mainMenu();

    if(option==1){
        
        do{
            play=selectPlay();

        }while (turnPlayer<=7 && winner==false);
    }



}
//FUNCTION THAT SELECT THE PLAY
int selectPlay(){
    int turn=0;
    int gamer;
    
     do{
        if(turnPlayer%2!=0){
            gamer=1;
        }
        else{
            gamer=2;
        }
        
        cout <<"PLAYER " << gamer <<" Select your play: 1-7 : "<<endl;
        cin >> turn;
    } while (turn < 0 || turn > 9);

    return turn;

}
//FUNCTION THAT CHECK IF THE PLAY IS VALID
bool checkPlay(int play){
     int row = play / 10, col = play - 1;
    if (gameArea[row][col] == 'X' || gameArea[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

//This function has the resposability to create the board to the PC
void matrixCpu(){
    for (int rowCpu = 0; rowCpu < 8; rowCpu++)
    {
        for (int colCpu = 0; colCpu < 8; colCpu++)
        {
            gameplayAreaCPU[rowCpu][colCpu] = gameArea[rowCpu][colCpu];
        }
    }
}

int mainMenu(){
    
     int gameMode;
    gotoxy(49,22);
    cout<<"\033[2;32m"<<"Choose the game mode: "<<"\033[o"<<endl;
    gotoxy(49,23);
    cout<<"\033[0;33m"<<"2.vs another player "<<"\033[o"<<endl;
    gotoxy(49,24);
    cout<<"\033[0;33m"<<"1.vs the PC "<<"\033[o"<<endl<<endl;
    cin>>gameMode;
    return gameMode;
}

void gotoxy(int x,int y){
    cout<<"\033["<<y<<";"<<x<<"f";
}

void instructions(){  
gotoxy(70,2); cout<<"\033[1;34m"<<"Welcome to Connect 4"<<"\033[o"<<endl;
gotoxy(53,4);
cout<<"\033[1;34m"<<"OBJECTIVE: "<<"\033[o"<<endl;
gotoxy(44,5);
cout<<"\033[0;30m"<<"Be the first player to connect 4 discs of the same color in a row"<<"\033[o"<<endl;
gotoxy(44,6);
cout<<"\033[0;30m"<<"(either vertical, horizontal or diagonal)"<<"\033[o"<<endl;
gotoxy(52,8);
cout<<"\033[1;34m"<<"HOW TO PLAY: "<<"\033[o"<<endl;
gotoxy(42,9);cout<<"\033[0;30m"<<"\u2726"<<"\033[o";
gotoxy(44,9);
cout<<"\033[0;30m"<<"Players must alternate turns and only one puck can be placed each "<<"\033[o"<<endl;
gotoxy(44,10);
cout<<"\033[0;30m"<<"turn."<<"\033[o"<<endl;
gotoxy(44,12);
cout<<"\033[0;30m"<<"\u2726 On your turn, let select the column in which you want to place one "<<"\033[o"<<endl;
gotoxy(44,13);
cout<<"\033[0;30m"<<"of your colored discs."<<"\033[o"<<endl;
gotoxy(44,15);
cout<<"\033[0;30m"<<"\u2726 The disc will be placed at the bottom of this column "<<"\033[o"<<endl;
gotoxy(44,16);
cout<<"\033[0;30m"<<"sitting on top of discs previously placed in one"<<"\033[o"<<endl;
gotoxy(44,17);
cout<<"\033[0;30m"<<"of the seven slots."<<"\033[o;"<<endl;
gotoxy(44,19);
cout<<"\033[0;30m"<<"\u2726 The game ends when there is a 4 in a row or deadlock."<<"\033[o"<<endl;

}



