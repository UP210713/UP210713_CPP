/*
Author: Samuel Salvador Soto Torres
UP210713
E-mail: up210713@alumnos.upa.edu.mx
*/
#include <iostream>

using namespace std;

int main()
{
    double evaluacion;
    double ResultadoDeEvaluacion;

    cout << "Cual es el resultado de tu evaluación, como empleado" << endl;
    cin >> evaluacion;
    if ((evaluacion == 0.0) || (evaluacion == 0.4) || (evaluacion >= 0.6))
    {
        ResultadoDeEvaluacion = evaluacion * 2400;

        if (evaluacion == 0.0)
        {
            cout << "Tu nivel de desempeño es inaceptable" << endl;
        }
        else if (evaluacion == 0.4)
        {
            cout << "Tu desempeño ha sido aceptable" << endl;
        }
        else if (evaluacion >= 0.6)
        {
            cout << "Tu desempeño ha sido meritorio" << endl;
        }
        cout << "El dinero que vas a recibir es: $ " << ResultadoDeEvaluacion << endl;
    }
    else
    {
        cout << "El valor de tu evalacion es invalido" << endl;
    }
    return 0;
}