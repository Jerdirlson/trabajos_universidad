#include <iostream> 
using namespace std; 

/*1.Hacer un programa en c++ que llene una matriz de 5*5 y luego muestre por pantalla la diagonal principal de la matriz */

int main()
{
    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"Ingrese el valor de la posicion: ["<<i<<"] ["<<j<<"] ";
            cin>> matriz[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                cout<<matriz[i][j]<< " ";
            }
            else
                cout<<"0 ";
            
        }
        cout<<endl;
    }  
}

/*
int main()
{
    int i , j;
    cout<<"Ingrese el numero de filas que va a tener la matriz: ";
    cin>> i;

    cout<<"Ingrese el numero de columnas que va a tener la matriz: ";
    cin>> j;

    int matriz[i + 1][j + 1];

    for (int posicionFila = 1; posicionFila < i + 1; posicionFila++)
    {

        if (posicionFila %2 == 0)
        {
            for (int posicionColumna = j  ; posicionColumna > 0 ; posicionColumna--)
            {
                cout<<"Ingrese el valor de la posicion: ["<<posicionFila<<"] ["<<posicionColumna<<"] ";
                cin>> matriz[posicionFila][posicionColumna];
            }    
        }
        else
        {
            for (int posicionColumna = 1; posicionColumna < j + 1; posicionColumna++)
            {
                cout<<"Ingrese el valor de la posicion: ["<<posicionFila<<"] ["<<posicionColumna<<"] ";
                cin>> matriz[posicionFila][posicionColumna];
            }
        }
        
    }
    
    for (int posicionFila = 1; posicionFila < i + 1; posicionFila++)
    {
        for (int posicionColumna = 1; posicionColumna < j + 1; posicionColumna++)
        {
            cout<<matriz[posicionFila][posicionColumna]<<" ";
        }
        cout<<endl;
    }
    
    
}
*/
/*
int main()
{
    int matriz_inicial[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"Ingrese un valor en la posicion ["<<i<<"]["<<j<<"]";
            cin>>matriz_inicial[i][j];
        }    
    }
    
    int segundo_vector[3], suma_columnas, suma_filas, suma_total_columnas, suma_total_filas;
    suma_columnas = 0;
    suma_filas = 0;
    suma_total_columnas = 0;
    suma_total_filas = 0;

    for (int i = 0; i < 3 ; i++)
    {
        cout<<"Ingrese el porcentaje del siguiente tipo 0.0 ";
        cin >> segundo_vector[i];
    }
    
    int matriz_final[3 + 1][4 + 1], suma_total;

    for (int i = 0; i < 3; i++)                            //i lleva las columnas
    {     
        for (int j = 0; j < 4 + 1 ; j++)                    //j lleva las filas
        {
            if (j < 3 + 1)
            {
                matriz_final[i][j] = segundo_vector[i] * matriz_inicial[i][j];
                suma_filas = suma_filas + matriz_final[i][j];
                
            }
            else
            {
                matriz_final[i][j] = suma_filas;
                suma_filas = 0;
            }
            suma_total_filas = suma_total_filas + suma_filas;
           }
        
    }
        suma_total = 0;
        
    for (int j = 0; j < 4 + 1; j++)                         //j es la que lleva las columnas
    {   
        for (int i = 0; i < 3 + 1; i++)                     //i es la que lleva las filas
        {
            if (i < 2 + 1)
            {
                suma_columnas = suma_columnas + matriz_final[i][j];
                suma_total_columnas = suma_total_columnas + suma_columnas;
                
            }
            else
            {
                matriz_final[i][j] = suma_columnas;
                suma_columnas = 0;
            }
            
        }   
    }

    for (int j = 0; j < 4 + 1; j++)                         //j es la que lleva las columnas
    {   
        for (int i = 0; i < 3 + 1; i++)                     //i es la que lleva las filas
        {
            if (j == 4 && i == 3)
            {
                suma_total=suma_total_columnas + suma_total_filas;
                matriz_final[i][j]= suma_total;
            }
            
        }   
    }
    
    
    for (int i = 0; i < 3 + 1; i++)
    {
        for (int j = 0; j < 4 + 1; j++)
        {
            cout<<matriz_final[i][j]<< " ";
        }
        cout<<endl;
    }
    
    

}*/