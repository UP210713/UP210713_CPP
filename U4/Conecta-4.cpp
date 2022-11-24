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

<<<<<<< HEAD
char areaGame[7][7]={{'1','2','3','4','5','6','7'},{'8','9','10','11','12','13','14'},{'15','16','17','18','19','20','21'},
                {'22','23','24','25','26','27','28'},{'29','30','31','32','33','34','35'},{'36','37','38','39','40','41','42'},{'43','44','45','46','47','48','49'}};
=======
int turnPlayer=1;
int gameArea[7][7];
>>>>>>> bbafa5bee3624760ee09f7a07afab0d04f204f09


// funcion principal 
 int main(){
<<<<<<< HEAD
    mainMenu();
    makeBoard();
=======

    mainMenu();
    makeBoard();
    playGame();
>>>>>>> bbafa5bee3624760ee09f7a07afab0d04f204f09

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
   
    int gameMode;
<<<<<<< HEAD
    cout<<"************Welcome to Connect 4****************"<<endl;
    cout<<"Choose the game mode: 1.vs the PC or 2.vs another player  ";
=======
    gotoxy(15,3);
    cout<<"Welcome to Connect 4"<<endl;
    cout<<"Choose the game mode: 1.vs the PC "<<endl <<" 2.vs another player  "<<endl;
>>>>>>> bbafa5bee3624760ee09f7a07afab0d04f204f09
    cin>>gameMode;
    return gameMode;
}

<<<<<<< HEAD
=======
void gotoxy(int x,int y){
    cout<<"\033["<<y<<"i"<<x<<"f";
}



>>>>>>> bbafa5bee3624760ee09f7a07afab0d04f204f09
