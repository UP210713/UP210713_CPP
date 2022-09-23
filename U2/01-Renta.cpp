
#include<iostream>

using namespace std;

int main(){

    int Renta;
    int totalAPagar;

    cout<<"Ingresa la renta que generaste este mes: "<<endl;
    cout<<"$ ";
    cin>> Renta;
     if ( Renta<=9999)
     {
        totalAPagar=Renta*0.05;
        cout<<"Tu total a pagar de impuesto es: $ "<<totalAPagar<<endl;
     }
        else if (Renta>= 10000 & Renta <=19999)
        {
            totalAPagar=Renta*0.15;
            cout<<"Tu total a pagar de impuesto es: $ "<<totalAPagar<<endl;
        }
            else if (Renta>=20000 & Renta <=34999)
            {
                totalAPagar=Renta*0.20;
                cout<<"Tu total a pagar de impuesto es: $ "<<totalAPagar<<endl;
            }
                else if (Renta>=35000 & Renta <= 59999)
                {
                    totalAPagar=Renta*0.30;
                     cout<<"Tu total a pagar de impuesto es: $ "<<totalAPagar<<endl;
                }
                    else if (Renta>=60000)
                    {
                         totalAPagar=Renta*0.45;
                         cout<<"Tu total a pagar de impuesto es: $ "<<totalAPagar<<endl;
                    }
    
return 0;                
}