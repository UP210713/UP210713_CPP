#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
    
    int entero;
    float flotante;
    double grande;

    cout<<"Este programa muestra el ingreso de datos del usuario. \n";
    cout<<"ingresa un tipo de dato flotante: "<< endl;
    cin>> entero;
    cout<<"El dato ingresado es: " << entero << endl;

    cout<<"========================" << endl;


    printf("Usando la funcion printf y scanf \n");
    printf("Ingresa un dato de tipo flotante \n");
    scanf("%d", &entero);
    printf("El dato ingresado es: %c \n ", entero);

    cout<<"=================================" << endl;
    return 0;

}