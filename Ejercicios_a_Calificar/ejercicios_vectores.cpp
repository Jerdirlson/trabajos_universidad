#include <iostream>

using namespace std;

/*
//Realizar un programa que permita buscar un elemento dentro de un arreglo de elementos
main()
{
    
    int lim, a[50], num, band = 0;

    cout<<"Ingrese limite: ";
    cin>> lim;

    cout<<"Elementos del array a: ";

    for (int i = 0; i < lim; i++)
    {
        cout<<"Elemento "<<i<<":";
        cin>> a[i];
    }

    cout<<"Ingrese el numero que quiere buscar: ";
    cin>> num;

    for ( int i = 0; i < num; i++)
    {
        if (a[i] == num)
        {
            cout<<"EL elemento fue encontrado en el subindice: "<<i;

            band = 1;
        }
        
    }

    if (band == 0)
    {
        cout<<"El elemento no fue encontrado";
    }
    
}*/

//Hacer un programa que lee por teclado la nota de los alumnos de una clase y calcule la nota media
//del grupo. tambien muestra los alumnos con notas superiores a la media.
int main()
{
    int num_stu, cont, prom;
    cont = 0;
    cout<<"Ingrese el numero de estudiantes: ";
    cin>> num_stu;

    int a[num_stu];

    for (int i = 1; i < num_stu+1; i++)
    {
        cout<<"Ingrese la nota del estudiante "<<i<<":";
        cin>> a[i];
    }

    for (int i = 1; i < num_stu+1; i++)
    {
        cont = cont + a[i];
    }
    
    prom = cont / num_stu;
    
    cout<<"El promedio del curso fue: "<<prom<<endl;

    for (int i = 1;  i < num_stu; i++)
    {
        if (a[i] > prom)
        {
            cout<<"El estudiante "<<i<<" es superior al promedio: "<<a[i]<<endl;
        }
    }
}