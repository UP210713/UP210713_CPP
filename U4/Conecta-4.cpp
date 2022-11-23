/*
Date: 23/11/2022
Author: Samuel Salvador Soto Torres
        Jorge Emilio Santacruz Morales
        Osiris Olimpia Martinez 

Description: Conect 4
*/

#include <iostream>

using namespace std;

int mainMenu();//Osiris
void makeBoard();//Jorge
int selectPlay();//Samuel
bool checkPlay();//samuel


// funcion principal 
 int main(){

 }

int selectPlay(){
    int selectPlay;
    do
    {
        cout << "Give  me your move: "<< endl;
        cout << "Please only give entire numbers: "<< endl;
    } while (selectPlay > 49 && selectPlay < 0);
    return selectPlay;
}