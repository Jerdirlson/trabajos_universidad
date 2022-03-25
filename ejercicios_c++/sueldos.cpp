#include <iostream>

using namespace std;

//Introduce el numero de empleados y va a preguntar el sueldo de cada uno y al final va a decir cuantos empleados ganan mas de 300 y cuantos ganan menos

int main()
{
        int n,x, conta1, conta2, sueldo, gastos;

        cout<< "Cual es el numero de empleados: ";
        cin>> n;

        x = 1;
        conta1 = 0;
        conta2 =0;
        gastos = 0;

        do
        {
                cout<< "Sueldo del empleado: ";
                cin>> sueldo;

                if(sueldo <=300 )
                {
                        conta1 = conta1 + 1;
                }

                else
                {
                        conta2 = conta2 + 1;

                }

                gastos = gastos + sueldo;

                x= x + 1;
        }

        while(x <=n);

        cout<< "Cantidad de empleados con sueldo menores o iguales a 300: "<< conta1;
        cout<< "\nCantidad de empleados con sueldo mayores  a 300: "<< conta2;
        cout<< "\nGasto general: "<< gastos;
        cout<< "\n";
}
