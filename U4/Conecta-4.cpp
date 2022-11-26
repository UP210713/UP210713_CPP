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

int turnPlayer=1;
int gameArea[7][7];


// funcion principal 
 int main(){

    mainMenu();
    makeBoard();
    playGame();

 }

//FUNCTION THAT CREATES THE BOARD OF THE GAME


void makeBoard(){

    int row,col,x=0,y=0;

    cout<<"  1    2    3    4    5    6    7    "<<endl;

    for (row=0;row<=8;row++){
        
        for(col=0;col<=28;col++){

            if(col==0||col==4||col==8||col==12||col==16||col==20||col==24||col==28){
                cout<<"|";
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
//FUNCTION THAT STARTS THE GAME DEPENDING ON THE OPTION OF MODE GAME 
void playGame(){
    bool winner=false;
    int option=0,play=0;
    option=mainMenu();

    if(option==1){
        
        do{
            play=selectPlay();

        }while (turnPlayer<=49 && winner==false);
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
        
        cout << "PLAYER " << gamer <<" Select your play: 1-7 : "<<endl;
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


int mainMenu(){
    /*
    1.MEJORAR MENU
    2 INVESTIGAR COLORES
    3 CONTENIDO EN LINEA
    4 AÑADIR LAS REGLAS 
    */
    gotoxy(74,2);
    cout<<"Welcome to Connect 4"<<endl;
    instructions();

    int gameMode;
    
    gotoxy(76,17);
    cout<<"Choose the game mode: "<<endl;
    gotoxy(78,18);cout<<"1.vs the PC "<<endl;
    gotoxy(78,19);cout<<"2.vs another player  "<<endl;
    cin>>gameMode;
    return gameMode;
}

void gotoxy(int x,int y){
    cout<<"\033["<<y<<";"<<x<<"f";
}

void instructions(){
gotoxy(69,4); cout<<"OBJECTIVE: "<<endl;
gotoxy(44,5); cout<<"Be the first player to connect 4 discs of the same color in a row"<<endl;
gotoxy(44,6); cout<<"(either vertical, horizontal or diagonal)"<<endl;
gotoxy(44,8); cout<<"HOW TO PLAY: "<<endl;
gotoxy(44,9);cout<<"Players must alternate turns and only one puck can be placed each "<<endl;
gotoxy(44,10);cout<<"turn."<<endl;
gotoxy(44,12); cout<<"On your turn, let select the column in which you want to place one of "<<endl;
gotoxy(44,13); cout<<"your colored discs."<<endl;
gotoxy(44,15); cout<<"The disc will be placed at the bottom of this column "<<endl;
gotoxy(44,16);cout<<"sitting on top of discs previously placed in one of"<<endl;
gotoxy(44,17);cout<<" the seven slots."<<endl;
gotoxy(44,19);cout<<"The game ends when there is a 4 in a row or deadlock."<<endl<<endl<<endl;

}



