/* Hacer un programa que permita repetivamente calcular la tabla de 
multiplicar del numero del 2 al 9, calcular la division de un numero del 2 al 9 
calcular la serie de fibonacci de tantos numero el usuario pida, calcular el factorial 
de ese numero o calcular los divisores de ese numero sin contar el 1 y el mismo numero
*/

#include <iostream>
using namespace std;

int getMul (int nm)
{
    int i, lim_sup, mult;
    lim_sup = 9;

    for ( i = 2; i <= lim_sup; i++)
    {
        mult = i * nm;

        cout<<"\nLa tabla de multiplicar es: "<<mult;
    }
    
}


int main()
{
    int num, opt, mul, otro;

    cout<<"Digite el numero que quiere evaluar: ";
    cin>> num;

    do
    {
        cout<<"\n1.) Obtener la tabla de multiplicar del 2 al 9 ";
        cout<<"\n2.) Calcular los divisores del 2 al 9 ";
        cout<<"\n3.) Calcular fibonacci tantas veces indique el usuario ";
        cout<<"\n4.) Calcular la el factorial ";
        cout<<"\n5.) Calcular los divisores del 2 al 9 ";
        cout<<"\n\nIngrese el numero de la opreación que quiere realizar: ";
        cin>> opt;

        switch (opt)
        {
            case 1:
                mul = getMul(num);
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;

            default:
                break;
        }

            cout<<"\n\n1 Si quiere volver a calcular otra cosa ";
            cin>> otro;
    } while (otro == 1);
    

    return 0;
}
