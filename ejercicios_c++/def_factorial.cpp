#include <iostream>

using namespace std;

main()
{
    int n, f, i;

    f = 1;
    cout<<"Ingrese n: ";
    cin>> n;

    for ( i = n; 1 < i; i--)
    {
        f = f * i;
    }
    
    cout<<"El factorial de "<<n<<" -! es:"<<f;
    cout<<"\n";
}