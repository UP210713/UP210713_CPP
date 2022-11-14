#include <iostream>
#include <stdalign.h>
#include <time.h>


using namespace std;

void hacerTablero();
int creaTuJugada();
bool comprobarJuego(int juego, string);
void ponerElJuego(int jugada, string, string);
bool winner(string);


int row, col;
char estructuraGato[6][11];
int gameplayArea [3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int turnoDeJuego =1;
char gameplayAreaCpu[3][3];


const string PC = "Maquina";
const string HUMANO = "Humano";
const string TABLERO = "Real";
const string TABLEROIMAG = "Imaginario";

int jugadaCPU();
void matrizCPU();
int mejorJuego(string);


int main(){
    bool gameOver = false;
    int jugada;
    bool casillaOcupada = true;
    int mode;
    cout << "Welcome to the game of toc tac toe"<<endl;
    cout << "Please chose your mode to play"<<endl;
    cout << "1) Player 1 vs CPU"<<endl;
    cout << "2) Player 1 vs Player 2"<<endl;
    cin>>mode;
    if (mode==1)
    {
        do
        {
            system("clear");
            if (turnoDeJuego % 2 == !0)
            {
                do
                {
                    hacerTablero();
                    jugada = creaTuJugada();
                    casillaOcupada = comprobarJuego(jugada, TABLERO);
                    if (casillaOcupada == true)
                    {
                        system("clear");
                        cout << "Trye again \n";
                    }
                } while (casillaOcupada == true);
                ponerElJuego(jugada, TABLERO, HUMANO);
                gameOver = winner(TABLERO);
            }
            else
            {
                hacerTablero();
                jugada = jugadaCPU();
                ponerElJuego(jugada, TABLERO, PC);
                gameOver = winner(TABLERO);
            }
        } while (gameOver == false and turnoDeJuego < 10);
        system("clear");
        hacerTablero();    
    }
    else if (mode==2)
    {
        do
        {
            system("clear");
            do
            {
                hacerTablero();
                jugada = creaTuJugada();
                casillaOcupada = comprobarJuego(jugada, TABLERO);
                if (casillaOcupada == true)
                {
                    system("clear");
                    cout << "Trye again \n";
                }
            } while (casillaOcupada == true);
            ponerElJuego(jugada, TABLERO, HUMANO);
            gameOver = winner(TABLERO);
        } while (gameOver == false and turnoDeJuego < 10);
        system("clear");
        hacerTablero();
    }

    if (gameOver == true)
    {
        if (turnoDeJuego % 2 == 0)
        {
            cout << "Player 1 won" << endl;
        }
        else
        {
            if (mode == 1)
            {
                cout << "PC won";
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
void hacerTablero()
{
   row=0;
   col=0;
   for (int Row = 0; Row < 6; Row++){
        for (int Col = 0; Col < 11; Col++)
        {
            if (Col ==3 || Col ==7)
            {
                estructuraGato[Row][Col] = '|';
            }
            else if (Row ==1 || Row ==3)
            {
                estructuraGato[Row][Col] = '_';
            }
                        else if (Row != 5 && (Col == 1 || Col == 5 || Col == 9))
            {
                estructuraGato[Row][Col] = gameplayArea[row][col];
                col++;
                if (col == 3)
                {
                    col = 0;
                    row++;
                }
            }
            else
            {
                estructuraGato[Row][Col] = ' ';
            }
            
        }
   }
       for (int Row2 = 0; Row2  < 6 ; Row2++)
    {
        for (int Col2 = 0; Col2 < 11; Col2++)
        {
            if (estructuraGato[Row2][Col2] == 'X')
            {
                cout << "\033[0;31m" << estructuraGato[Row2][Col2] << "\033[0m";
            }
            else if (estructuraGato[Row2][Col2] == 'O')
            {
                cout << "\033[0;32m" << estructuraGato[Row2][Col2] << "\033[0m";
            }
            else
            {
                cout << estructuraGato[Row2][Col2];
            }
        }
        cout << endl;
    }
}


int creaTuJugada()
{
    int jugadaSeleccionada;
    do
    {
        cout << "Give  me your move: ";
        cin >> jugadaSeleccionada;
    } while (jugadaSeleccionada > 9 && jugadaSeleccionada < 0);
    return jugadaSeleccionada;
}

bool comprobarJuego(int juego, string Tablero)
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
            return true;
        }
        else
        {
            return false;
        }
    }
        else if (Tablero == TABLEROIMAG)
    {
        if (gameplayAreaCpu[row][col] == 'O' || gameplayAreaCpu[row][col] == 'X')
        {
            casillaLista = true;
        }
    }
    return casillaLista;
}

void ponerElJuego(int jugada, string Tablero, string Jugador){
    char caracterDeJugada;
    if (turnoDeJuego %2 == 0)
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
            else if (Tablero == TABLEROIMAG)
            {
                if (Jugador == HUMANO)
                {
                    caracterDeJugada = 'O';
                }
                else if (Jugador == PC)
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
        turnoDeJuego++;
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
        else if (tablero == TABLEROIMAG)
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
    else if (tablero == TABLEROIMAG)
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
    jugada = mejorJuego(PC);
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
        casillaLlenada= comprobarJuego (jugada,TABLERO);
    }
    return jugada;
}
void matrizCPU(){
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            gameplayAreaCpu[fila][columna] = gameplayAreaCpu[fila][columna];
        }
    }
}

int mejorJuego(string jugador)
{
    bool casillaOcupada = false;
    bool gameover = false;
    int jugada = 0;
    matrizCPU();
    if (jugador == PC)
    {
        do
        {
            jugada++;
            casillaOcupada=comprobarJuego(jugada, TABLEROIMAG);
            if (casillaOcupada == false){
                ponerElJuego(jugada, TABLEROIMAG, PC);
                gameover = winner(TABLEROIMAG);
            }
            matrizCPU();
        } while (jugada <= 9 && gameover == false);
    } 
    else if (jugador == HUMANO)
    {
        do
        {
            jugada++;
            casillaOcupada=comprobarJuego(jugada, TABLEROIMAG);
            if (casillaOcupada== false){
                ponerElJuego(jugada, TABLEROIMAG, HUMANO);
                gameover = winner(TABLEROIMAG);
            }
            matrizCPU();
        } while (jugada <= 9 && gameover == false);
    }
    if (jugada >= 10){
        jugada= -1;
    }
    return jugada;
}