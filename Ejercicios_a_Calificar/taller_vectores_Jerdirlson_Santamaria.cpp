#include <iostream>
using namespace std;

//Ejercicio 1: Formar un vector de números enteros del que no se sabe el número de elementos.
//Calcular el promedio de los elementos y formar dos nuevos arreglos, uno con los
//elementos menores o iguales al promedio y otro con los superiores. Imprimir los dos
//nuevos arreglos.

/*
int main()
{
    int cnt_elm, prom, sum;

    cout<<"Ingrese el numero de elementos: ";
    cin>> cnt_elm;

    int vlista[cnt_elm + 1];

    for (int i = 1; i < cnt_elm + 1 ; i++)
    {
        cout<<"Ingrese el valor del elemento numero: "<< i<<" ";
        cin>>vlista[i];
    }
    
    prom = 0;
    sum = 0;
    
    for (int i = 1; i < cnt_elm +1 ; i++)
    {
        sum = sum + vlista[i];
    }
    
    prom = sum / cnt_elm;

    cout<<"El promedio fue "<<prom<<endl;

    int list_may[cnt_elm];
    int list_men[cnt_elm];
    int j, h;
    j = 0;
    h = 0;

    for (int i = 1; i < cnt_elm + 1 ; i++)
    {
        if (vlista[i] > prom)
        {
            list_may[j] = vlista[i];
            j++;
        }
        else
        {
            list_men[h] = vlista[i];
            h++;
        }
        
    }

    for (int i = 0; i < j ; i++)
    {
        cout<<"El elemento es superor a promedio ("<<prom<<") "<<list_may[i]<<endl;
    }

    cout<<"--------------------------------------------------"<<endl;
    for (int i = 0; i < h ; i++)
    {
        cout<<"El elemento es igual u inferior a promedio ("<<prom<<") "<<list_men[i]<<endl;
    }

}
*/

//Ejercicio 2: Leer dos arreglos unidimensionales de igual tamaño, ambos de wipo real. Formar un
//tercer arreglo mediante el producto de los elementos del primer arreglo con los del
//segundo en orden invertido, es decir, el producto del primer vector por el último
//elemento del segundo vector, el producto del segundo elemento del primer vector
//por el penúltimo del segundo vector, y así sucesivamente. Imprimir los tres arreglos.
/*
int main()
{
    int lim, j, h; 
    
    cout<<"Introduzca el numero de elementos que tendra el arreglo: ";
    cin>> lim;

    cout<<"Va a introducir los datos del primer vector. "<<endl<<endl;

    int list1[lim + 1], list2[lim + 1];

    for (int i = 1; i < lim + 1; i++)
    {
        cout<<"Ingrese el "<< i << " valor: ";
        cin>> list1[i];
    }

    cout<<endl<<endl;

    cout<<"Va a introducir los datos del segundo vector. "<<endl<<endl;

    for (int i = 1; i < lim + 1; i++)
    {
        cout<<"Ingrese el "<< i << " valor: ";
        cin>> list2[i];
    }

    int list3[lim + 1];
    j = 1;                          //j va a ser el contador de la lista1 
    h = lim;                   //h sera el contador de la lista 2 

    for (int i = 1; i < lim + 1 ; i++)
    {
        list3[i] = list1[j] * list2[h];

        j++;
        h--;
    }
    

    for (int i = 1; i < lim + 1; i++)
    {
        cout<<"El elemento "<<i<<" es:" <<list3[i]<<endl;
    }
}
*/


//Ejercicio 3: Llenar un arreglo con los números primos entre 1 y 50. Mostrarlos en la pantalla.
/*
int main()
{
    int numeros[50 + 1];

    int primos[50], cont_prim, h;

    h = 1;
    cont_prim = 1;

    for (int i = 1; i < 50 + 1; i++)
    {
        numeros[i] = i;
    }

    for (int i = 1; i < 50 + 1; i++)
    {
        int divisor, divisores;

        divisor = 1;
        divisores = 0;


    do{
        if (numeros[i] % divisor == 0)
        {
            divisores ++;
        }
            divisor++;

    }while (divisor <= numeros[i]);


    if (divisores == 2)
    {
        primos[h] = numeros[i];
        h++;
        cont_prim ++;
    }
    }
    for (int j = 1; j < cont_prim; j++)
    {
        cout<<"Este es el "<< j << " numero primo: "<<primos[j]<<endl;
    }
}
*/

//Ejercicio 4: Realizar un programa en que se creen dos arreglos cada uno almacena 10 números
//enteros. El primer arreglo es llena|do por el usuario, el segundo se llena término a
//término según el contenido del primer arreglo así:

//Si el número es par en el segundo arreglo se asigna el cuadrado de ese número, en
//caso contrario el cubo del número. Mostrar el contenido final de los dos vectores.
/*
int main()
{
    int list1[10 + 1], list2[10 + 1];

    for (int i = 1; i < 10 + 1; i++)
    {
        cout<<"Ingrese un numero en la posición "<< i <<": "; 
        cin >> list1[i];
    }

    for (int i = 0; i < 10 + 1; i++)
    {
        if (list1[i] % 2 == 0)
        {
            list2[i] = list1[i] * list1[i];
        }
        else
        {
            list2[i] = list1[i] * list1[i] * list1[i];
        }
        
    }

    for (int i = 1; i < 10 + 1; i++)
    {
        cout << "En la posicion "<< i << " esta el numero: "<<list2[i]<<endl;
    }
    
}
*/

//Ejercicio 5: Para facturar el servicio de energía la empresa Energía Para Todos cuenta con una
//lista de usuarios almacenada en un vector y la lista de lecturas del mes anterior en
//un segundo vector. Se requiere un algoritmo que lea el valor del kW, tome la lectura
//actual de cada usuario y la registre en un tercer vector, calcule el consumo del mes
//por diferencia de lecturas y muestre para cada usuario: nombre, consumo y valor a
//pagar.
/*
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	string usuarios[100];
	int lectura1[100],lectura2[100],dif[100],pagar[100],tmn,vlrcon1,vlrcon2,vlrcon3,consumo;
	vlrcon1=25000;
	vlrcon2=35000;
	vlrcon3=50000;
	cout<<"¿Cuántos usuarios son?: ";cin>>tmn; //Solicitar la cantidad de usuarios
	usuarios[tmn];
	lectura1[tmn];
	lectura2[tmn];
	for(int i=0;i<tmn;i++){ //Capturar primer y segundo vector
		cout<<"Ingrese el nombre del usuario ["<<i+1<<"]: "; cin>>usuarios[i];
		cout<<"Ingrese la lectura del mes anterior para el usuario "<<usuarios[i]<<": "; cin>>lectura1[i];
		cout<<"Ingrese la lectura actual para "<<usuarios[i]<<": "; cin>>lectura2[i];
		cout<<""<<endl; //Espacio entre lineas
	}
	/*cout<<""; //Espacio entre lineas
	for(int i=0;i<tmn;i++){ //Capturar tercer vector
		cout<<"Ingrese la lectura actual para "<<usuarios[i]<<": "; cin>>lectura2[i];	
	}
	cout<<""<<endl; //Espacio entre lineas
	for(int i=0;i<tmn;i++){
		consumo=lectura1[i]-lectura2[i];
		dif[i]=consumo;
		if(consumo<0){
			pagar[i]=vlrcon3;
		}
		else if((consumo>0)&&(consumo<=20)){
			pagar[i]=vlrcon2;
		}
		else if(consumo>20){
			pagar[i]=vlrcon1;
		}
	}
	for (int i=0;i<tmn;i++){ //Imprimir los vectores y la operación
		cout<<"Usuario ["<<i<<"] es: "<<usuarios[i]<<endl;
		cout<<"Su lectura del mes anterior es: "<<lectura1[i]<<endl;	
		cout<<"Su lectura actual es: "<<lectura2[i]<<endl;
		cout<<"La diferencia entre sus lecturas es: "<<dif[i]<<endl;
		cout<<"Su valor a pagar es de "<<pagar[i]<<" pesos."<<endl;
		cout<<""<<endl;		
	}
}
*/