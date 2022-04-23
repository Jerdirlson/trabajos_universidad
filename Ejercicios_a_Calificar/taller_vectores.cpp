#include <iostream>
using namespace std;

//Ejercicio 1: Formar un vector de números enteros del que no se sabe el número de elementos.
//Calcular el promedio de los elementos y formar dos nuevos arreglos, uno con los
//elementos menores o iguales al promedio y otro con los superiores. Imprimir los dos
//nuevos arreglos.


int main()
{
    int cnt_elm, prom, sum;

    cout<<"Ingrese el numero de elementos: ";
    cin>> cnt_elm;

    int vlista[cnt_elm];

    for (int i = 1; i < cnt_elm +1 ; i++)
    {
        cout<<"Ingrese el valor del elemento numero: "<< i;
        cin>>vlista[i];
    }

    prom = 0;
    for (int i = 1; i < cnt_elm +1 ; i++)
    {
        sum = sum + vlista[i];
    }

    prom = sum / cnt_elm;

    int list_may[cnt_elm];
    int list_men[cnt_elm];

    for (int i = 1; i < cnt_elm; i++)
    {
        if (vlista[i] > prom)
        {
            list_may[i] = vlista[i];
        }
        else
        {
            list_men[i] = vlista[i];   
        }
        
    }
    for (int i = 1; i < cnt_elm; i++)
    {
        cout<<"El "<< list_may[i];
    }
    for (int i = 1; i < cnt_elm; i++)
    {
        cout<<"El "<< list_men[i];
    }
}

//Ejercicio 2: Leer dos arreglos unidimensionales de igual tamaño, ambos de wipo real. Formar un
//tercer arreglo mediante el producto de los elementos del primer arreglo con los del
//segundo en orden invertido, es decir, el producto del primer vector por el último
//elemento del segundo vector, el producto del segundo elemento del primer vector
//por el penúltimo del segundo vector, y así sucesivamente. Imprimir los tres arreglos.

//Ejercicio 3: Llenar un arreglo con los números primos entre 1 y 50. Mostrarlos en la pantalla.


//Ejercicio 4: Realizar un programa en que se creen dos arreglos cada uno almacena 10 números
//enteros. El primer arreglo es llena|do por el usuario, el segundo se llena término a
//término según el contenido del primer arreglo así:

//Si el número es par en el segundo arreglo se asigna el cuadrado de ese número, en
//caso contrario el cubo del número. Mostrar el contenido final de los dos vectores.

//Ejercicio 5: Para facturar el servicio de energía la empresa Energía Para Todos cuenta con una
//lista de usuarios almacenada en un vector y la lista de lecturas del mes anterior en
//un segundo vector. Se requiere un algoritmo que lea el valor del kW, tome la lectura
//actual de cada usuario y la registre en un tercer vector, calcule el consumo del mes
//por diferencia de lecturas y muestre para cada usuario: nombre, consumo y valor a
//pagar.
