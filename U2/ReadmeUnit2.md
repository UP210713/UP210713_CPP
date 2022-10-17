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

![Corrida de programa1.2](/imagenes/CorridaDePrograma.png)

![Corrida de programa1.3](/imagenes/CorridaDePrograma1.png)

![Corrida de programa1.4](/imagenes/CorridaDePrograma2.png)

**In the last images I show the test of the program**



<h1 align=center>======================================================</h1>



<h1 align=Center>Readme of the second program "02-beneficios"<h1>

<h2 align=Center>This program allows the user insert the result of his evaluation and checks his perfomance level<h2>

``` c++

    int main()
{
    double evaluacion;
    double ResultadoDeEvaluacion;
    //First the program asks the user for his level of performance
    cout << "What is your level of performance as an employee?" << endl;
    cin >> evaluacion;
    //Second part: the program analyze the answer of the user and determinate his level
    if ((evaluacion == 0.0) || (evaluacion == 0.4) || (evaluacion >= 0.6))
    {
        ResultadoDeEvaluacion = evaluacion * 2400;
    
        if (evaluacion == 0.0)
        {
            cout << "Your level of performance is unacceptable" << endl;
        }
        else if (evaluacion == 0.4)
        {
            cout << "Your performance is acceptable" << endl;
        }
        else if (evaluacion >= 0.6)
        {
            cout << "Your perfomance is meritorious" << endl;
        }
        //The las part the program shows at the user the amount of money he will recive
        cout << "the amount of money you will receive is: $ " << ResultadoDeEvaluacion << endl;
    }
    else
    {
        cout << "the worth of you evaluation is incorrect" << endl;
    }
    return 0;
} 

```

## First step: The program asks at the user for his performance.##
## Second step: The user check in his performance. ##
## Third step: the program analyze the performance what the user inserts and anlize the performance##
## Fourth step: the program shows at the user the result of his performance ando shows the money that he will recibe. ##

![Corrida de programa2](/imagenes/02-B-C1.png)
![Corrida de programa2.2](/imagenes/02-B-C2.png)
![Corrida de programa2.3](/imagenes/02-B-C3.png)

**In the last images I show you, the multiply test of the program two**

*EXPLICAR COMO FUNCIONA EL PROGRAMA.


<h1 align=center>======================================================</h1>



<h1 align=center> Readme of the third program "03-juegos"</h1>

``` c++

    int main (){
    int edad;
    //In the first part, the program needs the user intruce her age
    cout<<"How old are you?"<<endl;
    cin>>edad;
    //In thes second parte, the program evaluate the answer of the user and selects one option
    if (edad<4)
    {
        //This is the output of the program
        cout<<"Congratulations, you can entrance free"<<endl;
    }
    else if (edad >= 4 && edad <=18)
    {
        //This is the output of the program
        cout << "Sorry my friend, you most pay $5.00" << endl;
    }
    else if (edad > 18)
    {
        //This is the output of the program
        cout << "You are to old, you most pay $10.00" << endl;
    }
    else
    {
        //This is the output of the program
        cout << "Your data is incorrect, please try again" << endl;
    }
//This comand retun an int to the main function of the program
return 0;        
}

```
## First step: The program asks that he age.##
## Second step: The user check in he age ##
## Third step: the program analyze the age what the user inserts ##
## Fourth step: the program shows at the user the discount that he will recibe. ##

![Corrida de programa3](/imagenes/03-J.C1.png)
![Corrida de programa3.1](/imagenes/03-J-C2.png)
![Corrida de programa3.2](/imagenes/03-J-C3.png)

## The last images shows the test that I do about the program 3.##

<h1 align=center>======================================================</h1>



<h1 align=center> Readme of the fourth program "04-pizzas"</h1>

``` c++

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
        //In this part the program asks the user for what tipe of ingredent wants2
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

```

## First step: The program asks at the user the tipe of pizza waht he wants.##
## Second step: The user selects the type of pizaa what he wants ##
## Third step: the program analyze the answer of the user and asks again what ingredients the user prefer##
## Fourth step: The program shows at the user the type of pizza what he selects and the ingredients ##

## The last images shows the test that I do about the program 4.##

<h1 align=center>======================================================</h1>



<h1 align=center> Readme of the fifth program "05-Temperaturas"</h1>


```c++
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

```
## First step: The program asks at the user for 6 temeperatures.##
## Second step: The user check the 6 temperatures ##
## Third step: the program analyze the 6 temperarures ##
## Fourth step: the program shows at the user the average of all temperatures and the minimum and the maximum temperatures. ##

## The last images shows the test that I do about the program 5.##

<h1 align=center>======================================================</h1>



<h1 align=center> Readme of the sixth program "06-Compras"</h1>


```c++
    int main(){
    float precioProducto;
    int cantProducto;
    float calculo;
    float precio;
    //The program starts the cycle 
    do
    {
        //The user get into the cant of products that he will buy
        cout<<"Enter the cant of productos, will you buy"<<endl;
        cin >> cantProducto;
        if (cantProducto != 0 and precio != 0)
        {
            cout<<"Enter the prize of the products"<<endl;
            cin>>precio;
        }  
    //The program calculate the total purchase
    calculo += (cantProducto*precio);
    } while (cantProducto != 0 and precio != 0);
    //The program shows at the user the total purchase
    cout<<"You will pay: $"<<calculo<<endl;
}
```

## First step: The program asks the cant of productos what the user will he buy and after asks the prize of the products##
## Second step: The user check in the cant of products and the pize of the products ##
## Third step: the program analyze the the cant of products for known when the program will he stops ##
## Fourth step: the program shows at the user the total cost of all products and the correspondets prizes. ##

## The last images shows the test that I do about the program 6.##

<h1 align=center>======================================================</h1>


<h1 align=center> Readme of the seventh program "07-BinarioADecimal"</h1>

```c++
#include<iostream>
using namespace std;
int main(){
    //These are the variables used in the code
    int numero;
    string resultado;
    cout<<"Enter one number in decimal, what do you want convert to binary"<<endl;
    cin>>numero;
    //In this cycle the program determines the number of times what repet de the cycly with one condition
    while (numero != 0)
    {
        //This "if" is necesary for create the binary number
        if (numero%2==0)
        {
            resultado="0"+resultado;
        }
        else{
            resultado="1"+resultado;
        }
        numero/=2;
    }
    //In this part the program shows at the user the binary number
    cout<<" You number in binary is: "<<resultado<<endl;
return 0;
}
```

## First step: The program asks that the user for one decimal number.##
## Second step: The user check in one decimal number ##
## Third step: the program converts the decimal number to binary number##
## Fourth step: the program shows at the user the binary number. ##

## The last images shows the test that I do about the program 7.##

<h1 align=center>======================================================</h1>


<h1 align=center> Readme of the seventh program "08-TablasDeMultiplicar"</h1>

```c++
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
```

## First step: The program asks at the user for the limit of the multiplication table ans after asks for one number to multiply the table.##
## Second step: The user check in the limit and the number ##
## Third step: the program create the table whit the limit and the number what the user inserts ##
## Fourth step: the program shows at the user the multiplication table. ##

## The last images shows the test that I do about the program 8.##