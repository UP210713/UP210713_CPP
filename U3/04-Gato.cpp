#include <iostream>

//Use of the namespace to avoid the std::
using namespace std;

int row=0, col=0;
char estructuraGato[6][11];

int main(){
    bool GameOver = false;
    int jugada;
    bool CasillaOcupada;
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
void hacerTablero(){
   row=0;
   col=0;
   for (int Row = 0; Row < 6; Row++){
        for (int Col = 0; Col < 11; Col++)
        {
        if (Col ==3 || Col ==7)
        {
            estructuraGato[Row][Col] = '|';
        }
        }
   }
}