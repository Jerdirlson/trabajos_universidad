#include <iostream>

using namespace std;


//Programa que permite decidir si quiere calcular perimetro de la figura 1 o de la figura 2 y si coloca mal los datos despues de 3 intentos lo saca.
main()
{
    int c, tip, h1, h2, b1, b2, a1, a2, p, altura, base, pc, otro;


    do
    { 

    c = 0;
    tip = 0;

    while ((tip > 2 || tip < 1) && (c < 3))
    {
        cout<<"Ingrese tipo de lote: ";
        cin>> tip; 

        c = c + 1;
    }

    if (tip > 0 && tip < 3)
    {
        if (tip == 2)
        {
            cout<<"Ingrese h1";
            cin>> h1;

            cout<<"Ingrese h2";
            cin>> h2;

            cout<<"Ingrese b1";
            cin>> b1;

            cout<<"Ingrese b2";
            cin>> b2;

            cout<<"Ingrese a1";
            cin>> a1;

            cout<<"Ingrese a2";
            cin>> a2;

            p= h1 + h2 + b1 + b2 + a1 + a2;
        }

        else
        {
            cout<<"Ingrese la altura";
            cin>> altura; 

            cout<<"Ingrese la base";
            cin>> base;

            pc = 2* 3.14 * (altura/2);

            p = (base * 2) + altura + pc;

        }

        cout<<"El perimetro es: "<<p;
        cout<<"\n";
        
    }
    else
    {
        cout<<"No ingreso bien los valores";
        cout<<"\n";
    }
    
    cout<<"Ingrese 1 si quiere reiniciar el programa, de lo contrario ingrese cualquier otro valor ";
    cin>> otro;
    }
    while (otro == 1);
}