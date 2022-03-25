#include <iostream>

using namespace std;

main()
{
        float s, b, r, ot, n, otro;

        s = 0;
        b = 0;
        r = 0;
        ot = 0;
        
    do
    {
    
        do
        {
            cout<<"Meta el promedio del estudiante";
            cin>>n;
    
        } while (n > 5 || n < 0);
         
         if (n > 4)
         {
             s = s + 1;
         }
         else
         {
             if (n > 3)
             {
                 b = b + 1;
             }
             else
             {
                 if (n > 2)
                 {
                     r = r + 1;
    
                 }
                 else
                 {
                     ot= ot + 1;
                 }   
             }   
         }
    
    cout<<"Introduzca 1 si quiere otro estudiante";
    cin >> otro;
    } while (otro == 1);

    cout<<"Los estudiantes sobre salientes fueron"<<s;
    cout<<"\nLos estudiantes buenos fueron"<<b;
    cout<<"\nLos estudiantes regulares fueron"<<r;
    cout<<"\nLos estudiantes con otros talentos fueron"<<ot;
    cout<<"\n";
}