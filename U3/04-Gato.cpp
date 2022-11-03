#include <iostream>

// Use of namespace to avoid std::
using namespace std;
void hacertablero();
int main()
{
    char estructuragato[6][11];
    for (int row = 0; row < 6; row++)
    {
        for (int  col = 0; col < 11; col++)
        {

            if (col == 3 || col == 7){
                estructuragato[row][col]='|';
            }else if (row==1 || row == 3){
                estructuragato[row][col]='_';
            }
            else {
               estructuragato[row][col]=' '; 
            }
        }
    }
    for (int row = 0; row < 6; row++)
    {
        for (int  col = 0; col < 11; col++)
        {
            cout << estructuragato[row][col];
        }
        cout << endl;
    }
    return 0;
    estructuragato[0][0]=1;
}
void hacertablero(){
}
void colocarJugada(int jugada){
    char valorJugada;
}