<h1 align=Center>Readme of the second program "02-beneficios"<h1>

<h2 align=Center>This program allows the user inserte the result of his evaluation and checks his perfomance level<h2>

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
*EXPLICAR COMO FUNCIONA EL PROGRAMA.
