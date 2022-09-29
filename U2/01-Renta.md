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
## First step: se le solicita al usuario que ingrese su renta mensual.##
## Second step: el usuario ingresa su renta mensual. ##
## Third step: el programa analiza la renta que el ususairo ingreso, y mediante las condiciones "if" y "else if" determina el impuesto a pagar del usuario ##
## Fourth step: el rograma muestra al usuario el impuesto a pagar al usuario. ##

![Corrida de programa1](/imagenes/CorridaDePrograma0.png)

![Corrida de programa2](/imagenes/CorridaDePrograma.png)

![Corrida de programa3](/imagenes/CorridaDePrograma1.png)

![Corrida de programa4](/imagenes/CorridaDePrograma2.png)

**En la naterior imagen se muestra el resultado de haber corrido el programa**

<h2> Nota: las operaciones fueron comprobodas por el programador desde su calculadora, para así verificar que los resultadors del programa fueron correctos<h2>