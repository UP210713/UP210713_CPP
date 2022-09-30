<h1 align=center>Readme of the first program "01-Renta"<h1>

<h2>This program allows the user inserts the mensual renta and the program analyze the amount of rent and determinate the tax what the user will have to pay<h2>

``` c++
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
```
## First step: sthe user is asked for his monthly rent.##
## Second step: the user enters their monthly rent. ##
## Third step: the program analyze the rent what the user enters, and through the conditions "if" y "else if" determines the tax of the user to will pay##
## Fourth step: the program shows the user the tax to pay. ##

![Corrida de programa1](/imagenes/CorridaDePrograma0.png)

![Corrida de programa2](/imagenes/CorridaDePrograma.png)

![Corrida de programa3](/imagenes/CorridaDePrograma1.png)

![Corrida de programa4](/imagenes/CorridaDePrograma2.png)

**In the last images I show the test of the program**