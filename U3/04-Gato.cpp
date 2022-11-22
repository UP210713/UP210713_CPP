/*
Date: 07/11/2022
Author: Samuel Salvador Soto Torres
Email: up210713@alumnos.upa.edu.mx
Description: Tic Tac Toe game 
*/
#include <iostream>
#include <stdalign.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void makeBoard();
int createYourPlay();
bool checkGame(int play, string);
void putTheGame(int play, string, string);
bool winner(string);


int row, col;
char structureGame[6][11];
int gameplayArea [3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int turnOfPlay =1;
char gameplayAreaCpu[3][3];


const string CPU = "Maquina";
const string human = "human";
const string realBoard = "Real";
const string imaginaryBoard = "Imaginario";

int playCpu();
void matrixCpu();
int bestGame(string);


int main(){
    
    bool gameOver = false;
    int play;
    bool ocupiedBox = true;
    int mode;
    int respuesta;
    cout << "**********************************"<<endl;
    cout << "Welcome to the game of toc tac toe"<<endl;

    cout << "**********************************"<<endl;   
    cout << "Please chose your mode to play"<<endl;
    cout << "1) Player 1 vs CPU"<<endl;
    cout << "2) Player 1 vs Player 2"<<endl;
    cin>>mode;
    if (mode==1)
    {
        do
        {
            system("clear");
            if (turnOfPlay % 2 == !0)
            {
                do
                {
                    makeBoard();
                    play = createYourPlay();
                    ocupiedBox = checkGame(play, realBoard);
                    if (ocupiedBox == true)
                    {
                        system("clear");
                        cout << "Trye again \n";
                    }
                } while (ocupiedBox == true);
                putTheGame(play, realBoard, human);
                gameOver = winner(realBoard);
            }
            else
            {
                makeBoard();
                play = playCpu();
                putTheGame(play, realBoard, CPU);
                gameOver = winner(realBoard);
            }
        } while (gameOver == false and turnOfPlay < 10);
        system("clear");
        makeBoard();    
    }
    else if (mode==2)
    {
        do
        {
            system("clear");
            do
            {
                makeBoard();
                play = createYourPlay();
                ocupiedBox = checkGame(play, realBoard);
                if (ocupiedBox == true)
                {
                    system("clear");
                    cout << "Trye again \n";
                }
            } while (ocupiedBox == true);
            putTheGame(play, realBoard, human);
            gameOver = winner(realBoard);
        } while (gameOver == false and turnOfPlay < 10);
        system("clear");
        makeBoard();
    }

    if (gameOver == true)
    {
        if (turnOfPlay % 2 == 0)
        {
            cout << "Player 1 won" << endl;
        }
        else
        {
            if (mode == 1)
            {
                cout << "CPU won"<< endl;
            }
            else
            {
                cout << "Player 2 won" << endl;
            }
        }
    }
    else
    {
        cout << "Tie" << endl;
    }


    return 0;

}

//This function make the board for the game and put the multiple options of moves
void makeBoard()
{
   row=0;
   col=0;
   for (int Row = 0; Row < 6; Row++){
        for (int Col = 0; Col < 11; Col++)
        {
            if (Col ==3 || Col ==7)
            {
                structureGame[Row][Col] = '|';
            }
            else if (Row ==1 || Row ==3)
            {
                structureGame[Row][Col] = '_';
            }
                        else if (Row != 5 && (Col == 1 || Col == 5 || Col == 9))
            {
                structureGame[Row][Col] = gameplayArea[row][col];
                col++;
                if (col == 3)
                {
                    col = 0;
                    row++;
                }
            }
            else
            {
                structureGame[Row][Col] = ' ';
            }
            
        }
   }
       for (int Row2 = 0; Row2  < 6 ; Row2++)
    {
        for (int Col2 = 0; Col2 < 11; Col2++)
        {
            if (structureGame[Row2][Col2] == 'X')
            {
                cout << "\033[0;31m" << structureGame[Row2][Col2] << "\033[0m";
            }
            else if (structureGame[Row2][Col2] == 'O')
            {
                cout << "\033[0;32m" << structureGame[Row2][Col2] << "\033[0m";
            }
            else
            {
                cout << structureGame[Row2][Col2];
            }
        }
        cout << endl;
    }

}

//In this function the program asks at the user fue his move
int createYourPlay()
{
    int selectPlay;
    do
    {
        cout << "Give  me your move: "<< endl;
        cout << "Please only give entire numbers: "<< endl;
        cin >> selectPlay;
    } while (selectPlay > 9 && selectPlay < 0);
    return selectPlay;
}
//This function have the responsability of check the options of move and determinates, if the box is filled
bool checkGame(int play, string board)
{
    bool boxReady = false;
    int rowG = 0, colG = 0;
    for (int playNumber = 1; playNumber < 10; playNumber++)
    {
        if (play == playNumber)
        {
            row = rowG;
            col = colG;
            break;
        }
        else
        {
            colG++;
            if (colG == 3)
            {
                colG = 0;
                rowG++;
            }
        }
    }
    if (board == realBoard)
    {
        if (gameplayArea[row][col] == 'O' || gameplayArea[row][col] == 'X')
        {
           boxReady = true;
        }
    }
        else if (board == imaginaryBoard)
    {
        if (gameplayAreaCpu[row][col] == 'O' || gameplayAreaCpu[row][col] == 'X')
        {
            boxReady = true;
        }
    }
    return boxReady;
}

void putTheGame(int play, string board, string player){
    char playCharacter;

    

    if (turnOfPlay %2 == 0)
    {
        playCharacter = 'X';
    }
    else{
        playCharacter = 'O';
    }
    int row = 0, col = 0;
    for (int playNumber = 1; playNumber < 10; playNumber++)
    {
        if (play == playNumber)
        {
            if (board==realBoard){
                gameplayArea[row][col] = playCharacter;
                break;
            }
            else if (board == imaginaryBoard)
            {
                if (player == human)
                {
                    playCharacter = 'O';
                }
                else if (player == CPU)
                {
                    playCharacter = 'X';
                }
                gameplayAreaCpu[row][col] = playCharacter;
                break;
            }
        }
        else
        {
            col++;
            if (col == 3)
            {
                col = 0;
                row++;
            }
        }
    }
    if (board == realBoard){
        turnOfPlay++;
    }
}

bool winner(string board){
    bool win = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if (board == realBoard)
        {
            if (gameplayArea[posicion][0] == gameplayArea[posicion][1] && gameplayArea[posicion][posicion] == gameplayArea[posicion][2] && gameplayArea[posicion][1] == gameplayArea[posicion][2])
            {
                win = true;
                break;
            }
            if (gameplayArea[0][posicion] == gameplayArea[1][posicion] && gameplayArea[0][posicion] == gameplayArea[2][posicion] && gameplayArea[1][posicion] == gameplayArea[2][posicion])
            {
                win = true;
                break;
            }
        }
        else if (board == imaginaryBoard)
        {
            if (gameplayAreaCpu[posicion][0] == gameplayAreaCpu[posicion][1] && gameplayAreaCpu[posicion][posicion] == gameplayAreaCpu[posicion][2] && gameplayAreaCpu[posicion][1] == gameplayAreaCpu[posicion][2])
            {
                win = true;
                break;
            }
            if (gameplayAreaCpu[0][posicion] == gameplayAreaCpu[1][posicion] && gameplayAreaCpu[0][posicion] == gameplayAreaCpu[2][posicion] && gameplayAreaCpu[1][posicion] == gameplayAreaCpu[2][posicion])
            {
                win = true;
                break;
            }
        }
    }
    if (board == realBoard)
    {
        if (gameplayArea[0][0] == gameplayArea[1][1] && gameplayArea[0][0] == gameplayArea[2][2] && gameplayArea[1][1] == gameplayArea[2][2]) 
        {
            win = true;
        }
        else if (gameplayArea[2][0] == gameplayArea[1][1] && gameplayArea[2][0] == gameplayArea[0][2] && gameplayArea[0][2] == gameplayArea[1][1])
        {
            win = true;
        }
    } 
    else if (board == imaginaryBoard)
    {
        if (gameplayAreaCpu[0][0] == gameplayAreaCpu[1][1] && gameplayAreaCpu[0][0] == gameplayAreaCpu[2][2] && gameplayAreaCpu[1][1] == gameplayAreaCpu[2][2])
        {
            win = true;
        }
        else if (gameplayAreaCpu[2][0] == gameplayAreaCpu[1][1] && gameplayAreaCpu[2][0] == gameplayAreaCpu[0][2] && gameplayAreaCpu[0][2] == gameplayAreaCpu[1][1])
        {
            win = true;
        }
    }
    return win;
}

int playCpu(){
    bool boxFilled = true;
    int play;
    srand(time(NULL));
    play = bestGame(CPU);
    if (play != -1)
    {
        return play;
    }
    play = bestGame(human);
    if (play != -1)
    {
        return play;
    }
    while (boxFilled == true)
    {
        play= 1 + rand() % 9;
        boxFilled= checkGame (play,realBoard);
    }
    return play;
}
void matrixCpu(){
    for (int rowCpu = 0; rowCpu < 3; rowCpu++)
    {
        for (int colCpu = 0; colCpu < 3; colCpu++)
        {
            gameplayAreaCpu[rowCpu][colCpu] = gameplayArea[rowCpu][colCpu];
        }
    }
}

int bestGame(string player)
{
    bool ocupiedSquare = false;
    bool gameover = false;
    int play = 0;
    matrixCpu();
    if (player == CPU)
    {
        do
        {
            play++;
            ocupiedSquare=checkGame(play, imaginaryBoard);
            if (ocupiedSquare == false){
                putTheGame(play, imaginaryBoard, CPU);
                gameover = winner(imaginaryBoard);
            }
            matrixCpu();
        } while (play <= 9 && gameover == false);
    } 
    else if (player == human)
    {
        do
        {
            play++;
            ocupiedSquare=checkGame(play, imaginaryBoard);
            if (ocupiedSquare== false){
                putTheGame(play, imaginaryBoard, human);
                gameover = winner(imaginaryBoard);
            }
            matrixCpu();
        } while (play <= 9 && gameover == false);
    }
    if (play >= 10){
        play= -1;
    }
    return play;
}

