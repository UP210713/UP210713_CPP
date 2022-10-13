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
    //These are the variables used in the code
    int numero;
    string resultado;
    cout<<"Enter one number in decimal, what do you want convert to binary"<<endl;
    cin>>numero;
    //In this cycle the program determines the number of times what repet de the cycly with one condition
    while (numero != 0)
    {
        //This "if" is necesary for create the binary number
        if (numero%2==0)
        {
            resultado="0"+resultado;
        }
        else{
            resultado="1"+resultado;
        }
        numero/=2;
    }
    //In this part the program shows at the user the binary number
    cout<<" You number in binary is: "<<resultado<<endl;
return 0;
}