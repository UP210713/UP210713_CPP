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
  
*/

#include <iostream>
#include <string.h>


using namespace std;

//MAIN FUNCTIONS OF THE CODE
void mainMenu();//Osiris
void makeBoard();//Jorge
int selectPlay();//Samuel
bool checkPlay(int);//samuel
void playGame(int);//Jorge
void insertPlay(int play);//Jorge
void gotoxy(int x,int y);
void instructions();
void fillArea();//Jorge
bool checkWinner();

//CONSTANTS OF THE CODE
int turnPlayer=1;
char gameArea[7][7];


//MAIN FUNCTION
 int main(){

    instructions();
    mainMenu();
    
    
    

 }
//FUNCTION THAT CREATES THE BOARD OF THE GAME
void makeBoard(){

    int row,col,x=1,y=1;
    

    cout<<"  1    2    3    4    5    6    7    "<<endl;

    for (row=0;row<=6;row++){
        
        for(col=0;col<=28;col++){

            if(col==0||col==4||col==8||col==12||col==16||col==20||col==24||col==28){
                cout<<"\033[0;34m"<<"|"<<"\033[o";
            }
            else if(col==3||col==7||col==11||col==15||col==19||col==23||col==27){

                
                cout<<"  "<<gameArea[x][y]<<" ";
                x++;
            }
                
        }


        cout<<endl;
        y++;
        x=1;

       
    }

}
//INT FUNCTION
int placeTabOn (){

    int placeTab;
    cout<<"choose in which column you want to place your token"<<endl;
    cin>>placeTab;
    

    return placeTab;
}
//THIS FUNCTION STARTS THE MODE OF THE GAME 
void playGame(int option){
    bool winner=false,box=false;
    int play;
    gotoxy(1,2);
    fillArea();
     makeBoard();
    

    if(option==1){
        
        do{
            play=selectPlay();
            box=checkPlay(play);
            if(box==true){
            
                do
                {
                    cout << "INVALID GAME! TRY AGAIN"<<endl;
                    break;
                    
                } while (box == true);
            }
            else if (box == false){

                system("clear");
                insertPlay(play);
               
                makeBoard();
                 
                
            } 
            winner=checkWinner();
            

        }while (turnPlayer<=49 && winner==false);

        if (turnPlayer<50){
                if (turnPlayer % 2 == 0){
                    cout << "PLAYER 1 WINS"<<endl;
                }
                else{
                    cout << "PLAYER 2 WINS"<<endl;
                }
            } 
            else{
                cout << "WE HAVE A TIE"<<endl;
            }

    }



}
//FUNCTION THAT SELECT THE PLAY
int selectPlay(){
    int move=0;
    int gamer;
    
     do{
        if(turnPlayer%2!=0){
            gamer=1;
        }
        else{
            gamer=2;
        }
        
        cout <<"PLAYER " << gamer <<" Select your play: 1-7 : "<<endl;
        cin >> move;
    } while (move<=0||move>9);

    return move;

}
//FUNCTION THAT CHECK IF THE PLAY IS VALID
bool checkPlay(int play){
    /*int row = play, col = 7;
    if (gameArea[row][col] == 'X' || gameArea[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
    */
   if (play<1||play>7){
    return true;
   }
   else{
    return false;
   }
   
}
//FUNCTION THAT INSERT A RECORD ON THE BOARD DEPENDING ON THE TURN
void insertPlay(int play){
    char record;
    int numPlay;
    int row=7;

   if(turnPlayer%2==0){
    record='X';
   }
    else{
        record='O';
   }

   
   if(gameArea[play][row]=='X' || gameArea[play][row]=='O'){
    do{

        row--;

    }while (gameArea[play][row]=='X' || gameArea[play][row]=='O');
    
    gameArea[play][row]=record;
   }
   else{
    gameArea[play][row]= record;
   }

   turnPlayer++;

}
//THIS FUNCTION CREATES THE MAIN MENU OF THE GAME
void mainMenu(){
    
     int gameMode;
    gotoxy(49,22);
    cout<<"\033[2;32m"<<"Choose the game mode: "<<"\033[o"<<endl;
    gotoxy(49,23);
    cout<<"\033[0;33m"<<"1.vs another player "<<"\033[o"<<endl;
    gotoxy(49,24);
    cout<<"\033[0;33m"<<"2.vs the PC "<<"\033[o"<<endl<<endl;
    cin>>gameMode;
    playGame(gameMode);
   
}
//FUNCTION THAT ENABLES THE GOTOXY TOOL TO MOVE THE ELEMENTS OF THE SCREEN
void gotoxy(int x,int y){
    cout<<"\033["<<y<<";"<<x<<"f";
}
//INSTRUCTIONS OF THE GAME
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
//AT FIRST INSTANCE THE BOARDS NEEDS TO BE FILL WITH EMPTY CHARACTERS
void fillArea(){
    for(int row=1;row<8;row++){
        for(int col=1;col<8;col++){
            gameArea[row][col]=' ';
        }
    }
}
//FUNCTION THAT CHECK IF THERE IS A WINNER
bool checkWinner(){
     bool checkWinner = false;
     int box=7;
    for (box; box<=1; box--){
        if((gameArea[box][1]==gameArea[box][2])&&(gameArea[box][2]==gameArea[box][3])&&(gameArea[box][3]==gameArea[box][4])){
            checkWinner=true;
            break;
        }
    }
    return checkWinner;
}
