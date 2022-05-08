#include <iostream>

using namespace std;

//Ejercicio del tercer quiz de logica

int main()
{
    int matrizespa[3][2], matrizingla[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Ingrese de la primera matriz el valor en la posicion ["<<i<<"]["<<j<<"]";
            cin>>matrizespa[i][j];

        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Ingrese de la segunda matriz el valor en la posicion ["<<i<<"]["<<j<<"]";
            cin>>matrizingla[i][j];

        }
        
    }

    int matrizfinal[3][2], matrizdescespa[3][2], matrizdescingla[3][2],matrizfinalespa[3][2],matrizfinalingla[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizdescespa[i][j] = matrizespa[i][j] * 20 /100;
            matrizfinalespa[i][j] = matrizespa[i][j] + matrizdescespa[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizdescingla[i][j] = matrizingla[i][j] * 10 / 100;
            matrizfinalingla[i][j] = matrizingla[i][j] - matrizdescingla[i][j];
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            cout<<matrizfinalespa[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            cout<<matrizfinalingla[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizfinal[i][j]= matrizfinalespa[i][j] + matrizfinalingla[i][j];
            cout<<matrizfinal[i][j]<< " ";
        }
        cout<<endl;
    }

}