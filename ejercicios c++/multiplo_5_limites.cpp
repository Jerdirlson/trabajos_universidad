#include <iostream>

using namespace std;

main()
{
    int nmrmay, nmrmen;

    cout<<"Ingrese limite mayor: ";
    cin>> nmrmay;

    cout<<"Ingrese limite menor: ";
    cin>> nmrmen;

    while(nmrmen <= nmrmay)
    {
        
        if (nmrmen % 5 == 0)
        {
            cout<< ""<<nmrmen;
            cout<< "\n";
        }

        else
        {
            
        }
        
        nmrmen = nmrmen +1;

    }

}