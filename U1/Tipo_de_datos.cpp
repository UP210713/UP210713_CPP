#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int entero = 4;
    float flotante = 2.565465654654; 
    double grande = 2.565465654654;
    char caracter = 64;


    cout<<"Este programa muestra los tipos de datos. \n";
    cout<<"El número entero es "<<entero<< endl;
    cout<<"El tamaño del entero es: 0"<<sizeof(entero)<<" bytes"<< endl;
    cout<<"El número del flotante es: "<<flotante<< endl;
    cout<<"El tamaño del flotante es: "<<sizeof(flotante)<<" bytes"<< endl;
    cout<<"El número del flotante es: "<<grande<< endl;
    cout<<"El tamaño del grande es: "<<sizeof(grande)<<" bytes"<< endl;
    cout<<"El caracter char es: "<<caracter<< endl;
    cout<<"El tamaño del char es: "<<sizeof(caracter)<<" bytes"<<endl;



    return 0;

}