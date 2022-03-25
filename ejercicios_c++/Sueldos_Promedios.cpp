#include <iostream>

using namespace std;

//Ejercicio para calcular horas extras si trabaja mas de 40 horas

int main()
{
        int horas, hextra, vlrextra, sueldobase, sueldo, Sueldo1;

        cout<< "ingrese el numero de horas: ";
        cin>> horas;

    Sueldo1=horas*20;

        if (horas> 40)
        {
            sueldobase = 40*20;
                hextra= (horas-40);
                vlrextra=(hextra*25);

                sueldo= vlrextra + sueldobase;

                cout<< "Su sueldo con horas extras es: "<<sueldo;

        }
        else
        {
                cout<< "Su sueldo es: "<<Sueldo1;
        }
}

//Ejercicio para Calcular si un estudiante aprobo introduciendo 3 notas 


/*


int main()
{
        float nt1, nt2, nt3, prm, prom;
        
        cout<<"Ingrese primera nota: ";
        cin>> nt1;
        cout<<"Ingrese segunda nota: ";
        cin>> nt2;
        cout<<"Ingrese tercera nota: ";
        cin>> nt3;
        
        prm= nt1 + nt2 + nt3;
        prom=prm /3;
        
        cout<<"\n"<<prom;
        
        if (prom< 3.8)
        {
                cout<<"Usted reprobo";
        }
        else
        {
                cout<<"Usted aprobo";
        }
        
}
*/

//Ejercicio para saber la cantidad de aprobados y reprobados por encima o igual a 7 (DOWHILE)
int main()
{
        int x, conta1, conta2, nota;
        
        x = 1;
        conta1 = 0;
        conta2 = 0;
        
        do
        {
                cout<< "Ingrese nota: ";
                cin>> nota;
                
                if(nota>=7)
                {
                        conta1 = conta1 + 1;
                }
                else 
                {
                        conta2 = conta2 + 1; 
                }
                
                x= x + 1;
        }
        while(x <= 10);
        
        cout<<"Cantidad de alumnos aprobados: "<< conta1;
        cout<<"\nCantidad de alumbos reprovados: "<< conta2;
}

//Ejercicio para saber la cantidad de aprobados y reprobados por encima o igual a 7 (WHILE)

int main()
{


        int x, conta1, conta2, nota;
        
        x = 1;
        conta1 = 0;
        conta2 = 0;
        
        while(x<=10)
        {
                cout<< "Ingrese nota: ";
                cin>> nota;
                
                if(nota>=7)
                {
                        conta1 = conta1 + 1;
                }
                else 
                {
                        conta2 = conta2 + 1; 
                }
                
                x= x + 1;
        }
        
        cout<<"Cantidad de alumnos aprobados: "<< conta1;
        cout<<"\nCantidad de alumbos reprovados: "<< conta2;
}

//