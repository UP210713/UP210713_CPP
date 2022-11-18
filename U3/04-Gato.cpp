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
bool checkGame(int juego, string);
void putTheGame(int jugada, string, string);
bool winner(string);


int row, col;
char structureGame[6][11];
int gameplayArea [3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int turnOfPlay =1;
char gameplayAreaCpu[3][3];


const string CPU = "Maquina";
const string HUMANO = "Humano";
const string TABLERO = "Real";
const string imaginaryBoard = "Imaginario";

int jugadaCPU();
void matrizCPU();
int mejorJuego(string);


int main(){
    
    bool gameOver = false;
    int jugada;
    bool casillaOcupada = true;
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
                    jugada = createYourPlay();
                    casillaOcupada = checkGame(jugada, TABLERO);
                    if (casillaOcupada == true)
                    {
                        system("clear");
                        cout << "Trye again \n";
                    }
                } while (casillaOcupada == true);
                putTheGame(jugada, TABLERO, HUMANO);
                gameOver = winner(TABLERO);
            }
            else
            {
                makeBoard();
                jugada = jugadaCPU();
                putTheGame(jugada, TABLERO, CPU);
                gameOver = winner(TABLERO);
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
                jugada = createYourPlay();
                casillaOcupada = checkGame(jugada, TABLERO);
                if (casillaOcupada == true)
                {
                    system("clear");
                    cout << "Trye again \n";
                }
            } while (casillaOcupada == true);
            putTheGame(jugada, TABLERO, HUMANO);
            gameOver = winner(TABLERO);
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
        cout << "Give  me your move: ";
        cin >> selectPlay;
    } while (selectPlay > 9 && selectPlay < 0);
    return selectPlay;
}
//This function have the responsability of check the options of move and determinates, if the box is filled
bool checkGame(int juego, string Tablero)
{
    bool casillaLista = false;
    int fila = 0, columna = 0;
    for (int numJuego = 1; numJuego < 10; numJuego++)
    {
        if (juego == numJuego)
        {
            row = fila;
            col = columna;
            break;
        }
        else
        {
            columna++;
            if (columna == 3)
            {
                columna = 0;
                fila++;
            }
        }
    }
    if (Tablero == TABLERO)
    {
        if (gameplayArea[row][col] == 'O' || gameplayArea[row][col] == 'X')
        {
           casillaLista = true;
        }
    }
        else if (Tablero == imaginaryBoard)
    {
        if (gameplayAreaCpu[row][col] == 'O' || gameplayAreaCpu[row][col] == 'X')
        {
            casillaLista = true;
        }
    }
    return casillaLista;
}

void putTheGame(int jugada, string Tablero, string Jugador){
    char caracterDeJugada;

    

    if (turnOfPlay %2 == 0)
    {
        caracterDeJugada = 'X';
    }
    else{
        caracterDeJugada = 'O';
    }
    int fila = 0, columna = 0;
    for (int numjuada = 1; numjuada < 10; numjuada++)
    {
        if (jugada == numjuada)
        {
            if (Tablero==TABLERO){
                gameplayArea[fila][columna] = caracterDeJugada;
                break;
            }
            else if (Tablero == imaginaryBoard)
            {
                if (Jugador == HUMANO)
                {
                    caracterDeJugada = 'O';
                }
                else if (Jugador == CPU)
                {
                    caracterDeJugada = 'X';
                }
                gameplayAreaCpu[fila][columna] = caracterDeJugada;
                break;
            }
        }
        else
        {
            columna++;
            if (columna == 3)
            {
                columna = 0;
                fila++;
            }
        }
    }
    if (Tablero == TABLERO){
        turnOfPlay++;
    }
}

bool winner(string tablero){
    bool win = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if (tablero == TABLERO)
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
        else if (tablero == imaginaryBoard)
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
    if (tablero == TABLERO)
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
    else if (tablero == imaginaryBoard)
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

int jugadaCPU(){
    bool casillaLlenada = true;
    int jugada;
    srand(time(NULL));
    jugada = mejorJuego(CPU);
    if (jugada != -1)
    {
        return jugada;
    }
    jugada = mejorJuego(HUMANO);
    if (jugada != -1)
    {
        return jugada;
    }
    while (casillaLlenada == true)
    {
        jugada= 1 + rand() % 9;
        casillaLlenada= checkGame (jugada,TABLERO);
    }
    return jugada;
}
void matrizCPU(){
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            gameplayAreaCpu[fila][columna] = gameplayArea[fila][columna];
        }
    }
}

int mejorJuego(string jugador)
{
    bool casillaOcupada = false;
    bool gameover = false;
    int jugada = 0;
    matrizCPU();
    if (jugador == CPU)
    {
        do
        {
            jugada++;
            casillaOcupada=checkGame(jugada, imaginaryBoard);
            if (casillaOcupada == false){
                putTheGame(jugada, imaginaryBoard, CPU);
                gameover = winner(imaginaryBoard);
            }
            matrizCPU();
        } while (jugada <= 9 && gameover == false);
    } 
    else if (jugador == HUMANO)
    {
        do
        {
            jugada++;
            casillaOcupada=checkGame(jugada, imaginaryBoard);
            if (casillaOcupada== false){
                putTheGame(jugada, imaginaryBoard, HUMANO);
                gameover = winner(imaginaryBoard);
            }
            matrizCPU();
        } while (jugada <= 9 && gameover == false);
    }
    if (jugada >= 10){
        jugada= -1;
    }
    return jugada;
}

