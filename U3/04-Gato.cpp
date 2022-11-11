#include <iostream>

//Use of the namespace to avoid the std::
using namespace std;

int row=0, col=0;
char estructuraGato[6][11];
int gameplayArea [3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int turnoDeJuego;

int main(){
    bool gameOver = false;
    int jugada;
    bool casillaOcupada;
    int mode;
    cout << "Welcome to the game of toc tac toe"<<endl;
    cout << "Please chose your mode to play"<<endl;
    cout << "1) Player 1 vs CPU"<<endl;
    cout << "2) Player 1 vs Player 2"<<endl;
    cin>>mode;
    if (mode==1)
    {
        
    }
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

bool comprobarjugada(int Juego)
{
    int fila = 0, columna = 0;
    for (int numJuego = 1; numJuego < 10; numJuego++)
    {
        if (Juego == numJuego)
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
    if (gameplayArea[row][col] == 'O' || gameplayArea[row][col] == 'X')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ponerElJuego(int jugada){
    
}