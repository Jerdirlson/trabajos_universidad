#include <iostream>

using namespace std;

main()
{   
    int lim_inf, lim_sup, r, i, t, j, otro;

    do
    {

    cout<<"Ingrese limite inferior: ";
    cin>>lim_inf;

    cout<<"Ingrese limite superior: ";
    cin>>lim_sup;

    r = lim_inf;
    j = 0;

    for ( i = lim_inf + 1; i <= lim_sup; i++)
    {

        if (j % 2 == 0)
        {
            t = 1;
        }
        else
        {
            t = -1;
        }
        
        r = r+ (t * i);

        j++;

        cout<<"\nEsto es r: "<<r;
    }
        cout<<"\nIngrese 1 si quiere repetir el proceso: ";
        cin>> otro;
    } while (otro == 1);
     
}