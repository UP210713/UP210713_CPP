#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int numero;
    int dato=1;

    cout<<"Ingresa un numero entero que tu quieras: ";
    cin >> numero;

    if ( numero == dato )
    {
        cout << " El numero es igual a dato" << endl;
    }
    if ( numero != dato)
    {
        cout << " El numero es diferente a dato" <<endl;
    }
    if ( numero < dato)
    {
        cout << " Tu numero es menor a dato" << endl;
    }
    if ( numero > dato)
    {
        cout << " Tu numero es mayor a dato" << endl;
    }
    if ( numero <= dato )
    {
        cout << " Tu numero es menor o igual a dato" << endl;
    }   
    if ( numero >= dato )
    {
        cout << " Tu numero es mayor o igual a dato" << endl;
    }
    
    
    return 0;
}