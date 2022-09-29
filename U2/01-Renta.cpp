/*
Samuel Salvador Soto Torres
ISC03B
01-Renta
Fecha de realizacion: 23 de septiembre 2022
*/
#include <iostream>

using namespace std;

int main()
{
    // Variables utilizadas para el programa
    int Renta;
    int totalAPagar;

    cout << "Enter the income you generated this month: " << endl;
    cout << "$ ";
    cin >> Renta;
    // Condiciones utilizadas para determinara el descuento que se  aplicara
    if (Renta <= 9999)
    {
        totalAPagar = Renta * 0.05;
    }
    else if (Renta >= 10000 & Renta <= 19999)
    {
        totalAPagar = Renta * 0.15;
    }
    else if (Renta >= 20000 & Renta <= 34999)
    {
        totalAPagar = Renta * 0.20;
    }
    else if (Renta >= 35000 & Renta <= 59999)
    {
        totalAPagar = Renta * 0.30;
    }
    else if (Renta >= 60000)
    {
        totalAPagar = Renta * 0.45;
    }
    // Impresion del impuesto a pagar
    cout << "Your total tax payable is: " << totalAPagar << endl;

    return 0;
}