/*
Author: Samue Salvador Soto Torres
Group: ISC03B
UP210713
E-mail: up210713@alumnos.upa.edu.mx
*/
#include<iostream>
using namespace std;
int main (){
    int Pizza;
    int ingredienteVegetariano;
    int ingredienteNoVegetariano;
    //In this first part the program asks the user for what tipe of pizza wants
    cout<<"What tipe of pizza will you buy?"<<endl;
    cout<<"Choose 1 for pizza vegetarian or 2 for pizza not vegetarian"<<endl;
    cin>>Pizza;
    //In this second parte the program analyze the answer of the user and determinate, if the pizza is vegetarian or real pizza
    if (Pizza == 1)
    {
        //In this part the program asks the user for what tipe of ingredent wants
        cout<<"You choose the vegetarian pizza, you can choose betewen this 2 ingredents"<<endl;
        cout<<"Choose 1 for pimiento or 2 for tofu"<<endl;
        cin>>ingredienteVegetariano;
        if (ingredienteVegetariano == 1)
        {
            cout<<"You choose a vegetarian pizza with pimiento"<<endl;
        }
        else if (ingredienteVegetariano == 2)
        {
            cout<<"You choose a vegetarian pizza with tofu"<<endl;
        }
        else{
            cout<<"You choose of ingredient is incorrect"<<endl;
        }
            
    }
    //In this second parte the program analyze the answer of the user and determinate, if the pizza is vegetarian or real pizza
    else if (Pizza == 2)
    {
        //In this part the program asks the user for what tipe of ingredent wants
        cout<<"You choose the real pizza, you can choose betewen of this 3 ingredients"<<endl;
        cout<<"Choose 1 for peperoni or 2 for jamon or 3 for salmon"<<endl;
        cin>>ingredienteNoVegetariano;
        if (ingredienteNoVegetariano==1)
        {
            cout<<"You choose the real pizza with peperoni"<<endl;
        }
        else if (ingredienteNoVegetariano == 2)
        {
            cout<<"You choose the real pizza with jamon"<<endl;
        }
        else if (ingredienteNoVegetariano == 3)
        {
            cout<<"You choose the real pizza with salmon"<<endl;
        }
        else{
            cout<<"You choose of ingredient is incorrect"<<endl;
        }
            
    }
    //The final part, if the user choose a wrong option the program informs at the user
    else{
        cout<<"You choose is incorrect, please try again"<<endl;
    }
    
return 0;  
}