#include<iostream>

using namespace std;

int getMaxVal(int num1, int num2);

int main(){
    int num1, num2;
    int ValorMaximo;
    cout<<"Dame el valor de un primer numero"<<endl;
    cin>>num1;
    cout<<"Dame el valor de un segundo numero"<<endl;
    cin>>num2;
    

    ValorMaximo=getMaxVal(num1,num2);

    cout<<"El valor maximo es: "<<ValorMaximo<<endl;
    return 0;
}

int getMaxVal(int num1, int num2){
    int ValorMaximo;
    if (num1 > num2)
    {
        ValorMaximo=num1;
    }else{
        ValorMaximo=num2;
    }
    return ValorMaximo;
}