#include <iostream>

using namespace std;

main()
{   
    int lim_inf, lim_sup, r, i, t;

    cout<<"Ingrese limite inferior: ";
    cin>>lim_inf;

    cout<<"Ingrese limite superior: ";
    cin>>lim_sup;

    r = lim_inf;

    for ( i = lim_inf + 1; i <= lim_sup; i++)
    {
        if (i % 2 == 0)
        {
            t = -1;
        }
        else
        {
            t = 1;
        }
        
        r = r +(t * i);

        cout<<"\nEsto es r: "<<r;
    }
     
}