/*
Date: 16/10/2022
Author: Samuel Salvador Soto Torres
Email: up210713@alumnos.upa.edu.mx
Description: bisección.

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float resolverEcuacion(float numero)
{
    return (pow(numero, 2) - numero - 12);
}

int imprimirlinea()
{
    for (int i = 0; i < 161; i++)
    {
        cout << "-";
    }
    cout << "\n";
    return 0;
}

int main()
{
    // Declare the variables what the problem use.
    int interador = 1;
    int solucion = 1;
    float a, b, c, ya, yb, yc = 1;

    // Ask the user for the range
    cout << "Enter the value A: ";
    cin >> a;
    cout << "Enter the value B: ";
    cin >> b;

    imprimirlinea();
    cout << "| Interdor \t| a \t\t\t| b \t\t\t| c \t\t\t| y(a)\t\t\t| y(b)\t\t\t| y(c)\t\t\t| \n";
    imprimirlinea();

    while (yc >= 0.01 || yc <= -0.01)
    {
        c = (a + b) / 2;
        ya = resolverEcuacion(a);
        yb = resolverEcuacion(b);
        yc = resolverEcuacion(c);
        interador++;

        cout << "| " << interador << "\t\t| " << fixed << setprecision(8) << a << "\t\t| " << b << "\t\t| " << c << "\t\t| " << ya << "\t\t| " << yb << "\t\t| " << yc << "\t\t| \n";
        imprimirlinea();
        if ((ya * yc) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        // This "If" is for prevent a infinite cycle
        if (a == b)
        {
            solucion = 0;
            break;
        }
    }
    if (solucion != 0)
    {
        cout << "The root is :" << c;
        cout << "\n";
    }
    else
    {
        cout << "There is no root in that range. \n";
    }
    return 0;
}