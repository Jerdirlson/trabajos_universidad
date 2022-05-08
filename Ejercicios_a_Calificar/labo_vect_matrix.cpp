#include <iostream>

using namespace std; 

/*1) Calcular la suma de los elementos de la diagonal principal
de una matriz cuatro por cuatro (4X4)
a. Datos de Entrada:
✓ Definición de la matriz y su tamaño
✓ Elementos de la matriz de tipo numérico
b. Datos Salida:
✓ Suma de los elementos de la diagonal principal de la
matriz
c. Algoritmo
Inicio
    Crear una matriz 3x3
    Leer cada elemento de la matriz y almacenarlo
    Mostrar en pantalla la matriz de elementos
 Recorrer la matriz para calcular la suma de los elementos de la diagonal
 principal
 Mostrar en pantalla el resultado de la suma
Fin
*/
/*
int main()
{
    int matriz[3][3], cnt_sum;

    cnt_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Ingrese el numero en la matriz en la posición ["<<i<<"]["<<j<<"]";
            cin>> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cnt_sum = cnt_sum + matriz[i][i];
    }

    cout<<"El total de la suma en diagonal es:"<< cnt_sum;

}
*/

/* 
2) Calcular el número de elementos negativos, cero y positivos de un vector dado de
sesenta elementos.
a. Datos de Entrada:
✓ Definición del vector de números
✓ Tamaño del Vector
✓ Elementos del vector de tipo numérico
b. Datos Salida:
✓ Número de elementos negativos del vector
✓ Número de ceros del vector
✓ Número de elementos positivos del vector
c. Algoritmo
Inicio
 Crear un vector de tamaño n
 Leer el tamaño el tamaño del vector
 Recorrer el vector para obtener el número de elementos negativos, ceros y positivos del
vector
 Mostrar en pantalla el valor de elementos negativos
 Mostrar en pantalla el valor de ceros
 Mostrar en pantalla el valor de elementos positivos
Fin
*/
/*
int main()
{
    int lim; 
    cout<<"De cuantos numeros quiere que sea el vector: ";
    cin>> lim;

    int vec_main[lim];

    for (int i = 0; i < lim; i++)
    {
        cout<<"Ingrese el numero en la posición: "<<i<<": ";
        cin>> vec_main[i];
    }
        int cnt_pst, cnt_neg, cnt_cero;
        cnt_pst = 0;
        cnt_neg = 0;
        cnt_cero = 0;

    for (int i = 0; i < lim; i++)
    {
        if (vec_main[i]> 0)
        {
            cnt_pst = cnt_pst + 1;
        }
        else
        {
            if (vec_main[i] == 0)
            {
                cnt_cero = cnt_cero + 1;
            }
            else
            {
                cnt_neg = cnt_neg + 1;
            }
            
        }
        
    }

    cout<<"Cantidad de numeros positivos en el vector: "<<cnt_pst<<endl;
    cout<<"Cantidad de numeros negativos en el vector: "<<cnt_neg<<endl;
    cout<<"Cantidad de ceros en el vector: "<<cnt_cero<<endl;

}
*/

/*
3) Leer una matriz de 3x3 elementos y calcular la suma de cada una de las filas y
columnas, dejando dichos resultados en dos vectores, uno de la suma de las filas y
otro de las columnas
a. Datos de Entrada:
✓ Definición de la matriz y su tamaño
✓ Elementos de la matriz de tipo numérico
b. Datos Salida:
✓ Vector de las sumas de los elementos por fila
✓ Vector de las sumas de los elementos por columna
c. Algoritmo
Inicio
 Crear una matriz 3x3
 Crear un vector para almacenar la suma por filas
 Crear un vector para almacenar la suma por columnas
 Leer cada elemento de la matriz y almacenarlo
 Mostrar en pantalla la matriz de elementos
 Calcular la suma por fila y almacenarla en el vector sumaf
 Mostrar en pantalla el vector sumaf
 Calcular la suma por columna y almacenarla en el vector sumac
 Mostrar en pantalla el vector sumac
Fin
*/
/*
int main () { 
	int matriz[3][3];
	int columnas[3];
	int filas[3];
	int fil,col;
	col=0;
	fil=0;
	for (int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			
			cout<<"Digite el numero de ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];	
		}
	}
	
	
	for (int i=0;i<3;i++) {		
		for(int j=0;j<3;j++) {
			
			cout<<matriz[i][j]<<" ";		
		}
		cout<<endl;
	}	
	
	for (int i=0;i<3;i++) {		
		fil=0;
		for(int j=0;j<3;j++) {
			
			fil=fil+matriz[i][j];		
		}
		filas[i]=fil;
		cout<<endl;
	}	
	for(int i=0;i<3;i++) {
		
		cout<<"La suma de la fila "<<i<<" es: "<<filas[i];
		
	cout<<endl;	
	}
	
	for (int j=0;j<3;j++) {		
		col=0;
		for(int i=0;i<3;i++) {
			
		col=col+matriz[i][j];		
		}
		columnas[j]=col;
		cout<<endl;
	}

	for(int i=0;i<3;i++) {
		
	cout<<"La suma de la columna "<<i<<" es: "<<columnas[i];
		
	cout<<endl;	
	}
}
*/

/*Hacer un programa en c++ que llene una matriz de n*m y luego muestre la matriz en pantalla*/
/*
int main()
{
    int i, j; 

    cout<<"Ingrese el numero de filas que va a tener la matriz: ";
    cin>> i;

    cout<<"Ingrese el numero de columnas que va a tener la matriz: ";
    cin>> j;

    int matriz[i][j];

    for (int posicionFila = 0; posicionFila < i; posicionFila++)
    {
        for (int posicionColumna = 0; posicionColumna < j; posicionColumna++)
        {
            cout<<"Ingrese el valor de la posicion: ["<<posicionFila<<"] ["<<posicionColumna<<"] ";
            cin>> matriz[posicionFila][posicionColumna];
        }
        
    }
    
    for (int posicionFila = 0; posicionFila < i; posicionFila++)
    {
        for (int posicionColumna = 0; posicionColumna < j; posicionColumna++)
        {
            cout<<matriz[posicionFila][posicionColumna]<<" ";
        }
        
        cout<<"\n";
    }  
}
*/