#include <iostream>

//Use of the namespace to avoid the std::
using namespace std;

void obtenerCambio(int);

void imprimirCambio(int);

int denominaciones[9]={500,200,100,50,20,10,5,2,1};
int cantidadBilletes[9]={0};


int main()
{
    int dinero;
    cout << "Give me the amount of money: ";
    cin >> dinero;
    obtenerCambio(dinero);
    imprimirCambio(dinero);
    return 0;
}
void obtenerCambio(int dinero)
{
    int residuo = 0;
    for (int denominacion = 0; denominacion < 9; denominacion++)
    {
        residuo=(denominacion==0)?dinero:residuo;
        cantidadBilletes[denominacion]=residuo/denominaciones[denominacion];
        residuo=residuo%denominaciones[denominacion];
    }
    
}
void imprimirCambio(int dinero)
{
    for ( int denominacion = 0; denominacion < 9; denominacion++)
    {
       cout<<"$"<<denominaciones[denominacion]<<": "<<cantidadBilletes[denominacion]<<endl;
    }
    
}