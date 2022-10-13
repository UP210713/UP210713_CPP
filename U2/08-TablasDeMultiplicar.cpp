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
    //These are te variables used in the code
    int numero;
    int limiteDeTabla;
    int multiplicacion;
    //In this part the program asks at the user the limit os his table
    cout<<"Please check in, the limit of your table of multiply"<<endl;
    cin>>limiteDeTabla;
    //The program asks at the user for what number he wants multiply the table
    cout<<"And now inser, the number for multiply"<<endl;
    cin>>numero;
    //In this cycles the program create the multiplication table using the variables
    for ( int i = 0; i <= limiteDeTabla; i++)
    {
        for ( int z = 0; z < 49; z++)
        {
            cout<<"-";
        }
        //Here the program shows the multiplication table
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