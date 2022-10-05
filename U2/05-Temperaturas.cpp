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
    //start the condition for get into the temperatures
    do
    {
        cout<<"Please, check in the temperatures"<<endl;
        cin>>temperatura;
        temAcum += temperatura;
        contador ++;
        //The program begins the process to determinate whats is the elderly or minor temperature
        if (temperatura <= temMenor)
        {
            temMenor=temperatura;
        }
        if (temperatura >= temMayor)
        {
            temMayor=temperatura;
        }
        
    } while (contador <= 6);
    //The program shows at the user the average of all temperatures
    cout<<"The average of the temperatures is: "<<temAcum/6<<endl;
    //The program shows the maximum and minimum temperatures
    cout<<"The minimum temperature is: "<<temMenor<<endl;
    cout<<"The maximum temperature is: "<<temMayor<<endl;
    
    return 0;
}