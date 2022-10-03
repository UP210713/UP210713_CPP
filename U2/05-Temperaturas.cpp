/*
Author: Samuel Salvador Soto Torres
Carrer: Computer systems engineer
Group: ISC03B
E-mail: up210713@alumnos.upa.edu.mx
*/
#include<iostream>
using namespace std;

int main (){
    float temperatura;
    int temAcum=0;
    int contador =1;
    int temMenor = 9999;
    int temMayor = 0;
    do
    {
        cout<<"Please, check in the temperatures"<<endl;
        cin>>temperatura;
        temAcum += temperatura;
        contador ++;
        if (temperatura <= temMenor)
        {
            temMenor=temperatura;
        }
        if (temperatura >= temMayor)
        {
            temMayor=temperatura;
        }
        
    } while (contador <= 6);
    cout<<"The average of the temperatures is: "<<temAcum/6<<endl;
    cout<<"The minimum temperature is: "<<temMenor<<endl;
    cout<<"The maxium temperature is: "<<temMayor<<endl;
    
    return 0;
}