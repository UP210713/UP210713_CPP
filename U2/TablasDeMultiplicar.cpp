/*
Author: Samuel Salvador Soto Torres
Carrer: Computer Systems Enginerr
Group: ISC03B
E-mail: up210713@alumnos.upa.edu.mx
Decription: Create the table of multiplication
*/
#include<iostream>

using namespace std;
int main(){
    int numero;
    int limiteDeTabla;
    int multiplicacion;
    cout<<"Please check in, the limit of your table of multiply"<<endl;
    cin>>limiteDeTabla;

    cout<<"And now inser, the number for multiply"<<endl;
    cin>>numero;
    
    for ( int i = 0; i <= limiteDeTabla; i++)
    {
        for ( int z = 0; z < 49; z++)
        {
            cout<<"-";
        }
        cout<<endl;
        multiplicacion=i*numero;
        cout<<"|\t"<<i<<"\tx\t"<<numero<<"\t=\t"<<multiplicacion<<"\t|"<<endl;
    }
    for ( int y = limiteDeTabla; y < 53; y++)
        {
            cout<<"-";
        }
        cout<<endl;
return 0;
}