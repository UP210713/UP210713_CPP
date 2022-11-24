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
void playGame(int);//Jorge

void gotoxy(int,int);

int turnPlayer=1;


// funcion principal 
 int main(){
    menu();
    mainMenu();
   // makeBoard();

 }

//FUNCTION THAT CREATES THE BOARD OF THE GAME
void gotoxy(int x,int y){
    cout<<"\033["<<y<<"i"<<x<<"f";
}

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
        
        cout << "PLAYER " << gamer <<" Select your play: 1-6 : "<<endl;
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
    gotoxy(15,3);
    int gameMode;
    cout<<"Welcome to Connect 4"<<endl;
    cout<<"Choose the game mode: 1.vs the PC or 2.vs another player  "
    cin>>gameMode;
    return gameMode;
}

