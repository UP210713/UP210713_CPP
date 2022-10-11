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
    int numero;
    string resultado;
    cout<<"Enter one number in decimal, what do you want convert to binary"<<endl;
    cin>>numero;
    while (numero != 0)
    {
        if (numero%2==0)
        {
            resultado="0"+resultado;
        }
        else{
            resultado="1"+resultado;
        }
        numero/=2;
    }
    cout<<" You number in binary is: "<<resultado<<endl;
return 0;
}