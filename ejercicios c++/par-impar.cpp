#include <iostream>

using namespace std;


// Ejercicio par impar ingresando la cantidad de numeros a digitar (DO WHILE)
main()
{
int x, pares, impares, n, valor;

        x = 1;
        pares = 0;
        impares = 0;

        cout<< "Cuantos numeros va a ingresar: ";
        cin>> n;

        do
        {
                cout<<"Ingrese el numero: ";
                cin>> valor;

                if(valor % 2 == 0)
                {
                        pares = pares + 1;
                }
                else
                {
                        impares = impares + 1;
                }

                x = x + 1;
        }
        while(x <= n);

        cout<< "Cantidad de numeros pares: "<< pares;
        cout<<"\nCantidad de numeros impares: "<< impares;

}