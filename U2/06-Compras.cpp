/*
Author: Samuel Salvador Soto Torres
Carrer: Computer Systems Enginerr
Group: ISC03B
E-mail: up210713@alumnos.upa.edu.mx
Decription: Calculate the total amount of the purchase
*/
#include<iostream>
using namespace std;

int main(){
    float precioProducto;
    int cantProducto;
    float calculo;
    float precio;
    //The program starts the cycle 
    do
    {
        //The user get into the cant of products that he will buy
        cout<<"Enter the cant of productos, will you buy"<<endl;
        cin >> cantProducto;
        if (cantProducto != 0 and precio != 0)
        {
            cout<<"Enter the prize of the products"<<endl;
            cin>>precio;
        }  
    //The program calculate the total purchase
    calculo += (cantProducto*precio);
    } while (cantProducto != 0 and precio != 0);
    //The program shows at the user the total purchase
    cout<<"You will pay: $"<<calculo<<endl;
}