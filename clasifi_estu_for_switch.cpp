#include <iostream>
using namespace std;

main()
{
    int s, b, r, ot, error, cant, i, nota;

    s=0;
    b=0;
    r=0;
    ot=0;
    error=0;

    cout<<"Ingrese la cantidad de estudiantes ";
    cin>> cant;

    for (i = 0; i < cant; i++)
    {
        cout<<"Introduce la nota del estudiantes ";
        cin>> nota;

        switch (nota)
        {
        case 5:
            s = s +1;
            break;
        case 4:
            b = b +1;
            break;
        case 3:
            r = r +1;
            break;
        case 2:
            ot = ot +1;
            break;
        case 1:
            ot = ot +1;
            break;
        default:
            error = error + 1;
            break;
        }
    }
    
    cout<<"Los estudiantes sobre salientes fueron "<<s;
    cout<<"\nLos estudiantes buenos fueron "<<b;
    cout<<"\nLos estudiantes regulares fueron "<<r;
    cout<<"\nLos estudiantes con otros talentos fueron "<<ot;
    cout<<"\nUsted tuvo estos errores "<< error;
    cout<<"\n";
}