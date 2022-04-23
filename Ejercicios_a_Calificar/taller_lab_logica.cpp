//En este archivo se van a presentar los 10 ejercicios del taller realizado en clase de laboratorio de logica


//PRIMER EJERCICIO:
/*El propietario de una pequeña empresa quiere conocer el valor a pagar por la
nómina de n empleados, sabiendo que cada uno tiene un sueldo base de
$855.000. Se sabe que por cada 10 horas extras que trabaje el empleado al mes
obtendrá un 10% más de bonificación al mes, si el empleado trabaja 20 hora extras
al mes obtendrá una bonificación del 15% y si trabaja 32 horas extras recibirá un
20% de bonificación; se debe tener en cuenta que las prestaciones sociales de los
empleados equivalen a un 26% de su salario base.*/

#include <iostream>
#include <math.h>

using namespace std;
/*
main()
{
    int sueld_base, cant, cont, cant_horext, prest_sociales, sueldo, suel_final;
    cont = 1;
    sueld_base = 855000;
    prest_sociales = (sueld_base * 26)/100;


    cout<<"Ingrese la cantidad de empleados: ";
    cin>> cant;
    
    do
    {

    sueldo = sueld_base - prest_sociales;
    cout<<"Ingrese cantidad de horas extras: ";
    cin>> cant_horext;

    if (cant_horext > 32)
    {
        suel_final = 
    }
    
    
    
    cont++;
    
    } while (cont < cant);
    
}
*/

//SEGUNDO EJERCICIO:

/*
Un grupo de jóvenes emprendedores sale de compras para prepararse a la
realización de la presentación de su propuesta de negocio y al llegar a su casa cada
uno quiere calcular el valor total invertido en su atuendo, si se sabe que cada uno
compró cuatro camisas, tres pantalones, dos pares de zapatos, una chaqueta y 4
libros (Programación, Innovación, Emprendimiento y Lógica de Programación).
Tenga presente que cada artículo tiene un valor diferente.
*/
/*
main()
{   
    int num_cam, i, cont_cam, prec_cam, ttl_prc_cam, num_pant, prec_pant, ttl_prc_pant, cont_pant, num_zap, prec_zap, ttl_prc_zap, cont_zap,prec_cha, ttl_prc_cha, cont_cha, num_cha, num_lib;
    int cont_libros, opt, val_lib1, ttl_val_lib1, val_lib2, ttl_val_lib2, val_lib3, ttl_val_lib3,val_lib4, ttl_val_lib4, cont_lib, ttl_libros, total;

    cont_cam = 0;
    cont_pant = 0;
    cont_zap = 0;
    cont_cha = 0;
    ttl_prc_cam = 0;
    ttl_prc_pant = 0;
    ttl_prc_zap = 0;
    ttl_prc_cha = 0;
    cont_libros = 0;
    ttl_val_lib1 = 0;
    ttl_val_lib2 = 0;
    ttl_val_lib3 = 0;
    ttl_val_lib4 = 0;

        cout<<"Ingrese la cantidad de las camisas que compro: ";
        cin>>num_cam;

    
    while (cont_cam < num_cam)
    {
        cout<<"Ingrese el precio de las camisas: ";
        cin>>prec_cam;

        ttl_prc_cam = ttl_prc_cam + prec_cam;

        cont_cam++;
    }
    
    cout<<"\nEl precio total de las camisetas es: "<<ttl_prc_cam;
    
    
    /*do
    {
        cout<<"Ingrese el precio de las camisas: ";
        cin>>prec_cam;

        ttl_prc_cam = ttl_prc_cam + prec_cam;

        cont_cam++;
    } 
    while (cont_cam < num_cam);

    cout<<"\nEl precio total de las camisetas es: "<<ttl_prc_cam;
    """Con DO WHILE es ineficiente el codigo ya que si no compro el elemento con do while igual le contaria"""
    
    cout<<"\n\nIngrese la cantidad de pantalones que compro: ";
        cin>>num_pant;

    while (cont_pant < num_pant)
    {
        cout<<"Ingrese el precio de los pantalones: ";
        cin>>prec_pant;

        ttl_prc_pant = ttl_prc_pant + prec_pant;

        cont_pant++;
    }
    
    cout<<"\n El precio total de los pantalones es: "<<ttl_prc_pant;

    cout<<"\n\nIngrese la cantidad de pares de zapatos que compro: ";
        cin>>num_zap;

    while (cont_zap < num_zap)
    {
        cout<<"Ingrese el precio de los pares de zapatos: ";
        cin>>prec_zap;
        
        ttl_prc_zap = ttl_prc_zap + prec_zap;

        cont_zap++;
    }
        
    cout<<"\n El precio total de los zapatos es: "<<ttl_prc_zap;
    
    cout<<"\n\nIngrese la cantidad de chaquetas que compro: ";
        cin>>num_cha;

    while (cont_cha < num_cha)
    {
        cout<<"Ingrese el precio de las chaquetas: ";
        cin>>prec_cha;
        
        ttl_prc_cha = ttl_prc_cha + prec_cha;

        cont_cha++;
    }
    

    cout<<"\n El precio total de las chaquetas es: "<<ttl_prc_cha;
    
    cout<<"\n\nIntroduzca cuantos libros compró: ";
    cin>>num_lib;

    while (cont_libros < num_lib)
    {
        cout<<"\nElija que tipo de libro compró: ";
        cout<<"\n1.)Programacón.";
        cout<<"\n2.)Innovación.";
        cout<<"\n3.)Emprendimiento.";
        cout<<"\n4.)Lógica de programación.";
        cout<<"\n";
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<"Ingrese el valor del libro de programación: ";
            cin>>val_lib1;

            ttl_val_lib1 = ttl_val_lib1 + val_lib1;
            break;
        case 2:
            cout<<"Ingrese el valor del libro de innovación: ";
            cin>>val_lib2;

            ttl_val_lib2 = ttl_val_lib2 + val_lib2;
            break;
        
        case 3:
            cout<<"Ingrese el valor del libro de emprendimiento: ";
            cin>>val_lib3;

            ttl_val_lib3 = ttl_val_lib3 + val_lib3;
            break;

        case 4: 
            cout<<"Ingrese el valor del libro de lógica de programación: ";
            cin>>val_lib4;

            ttl_val_lib4 = ttl_val_lib4 + val_lib4;
            break;

        default:
            cout<<"No selecciono una opción valida";
            break;
        }
        
        cont_libros++;
    }

    ttl_libros = ttl_val_lib1 +ttl_val_lib2 + ttl_val_lib3 + ttl_val_lib4;

    cout<<"\nEl costo total de todos los libros fue: "<<ttl_libros;

    total = ttl_prc_cam + ttl_prc_pant + ttl_prc_zap + ttl_prc_cha + ttl_libros;

    cout<<"\nEl costo total de todas las cosas es: "<<total;
    cout<<"\n";
    
}

*/

//TERCER EJERCICIO:

/*Solicitar a una persona que escriba un número entero, diga cuales son los tres
siguientes números pares enteros sucesivos; a continuación, sume los números
resultantes y su resultado multiplíquelo por el número ingresado. Visualice todos
los resultados.*/

/*
main()
{
    int num, c, i, sum, b, a; 
    cout<<"Ingrese el primer numero ";
    cin>> num;
    c = num;
    i = 0;
    sum = 0;

    do
    {
        if (c % 2 ==0)
        {
            c = c + 2;

            
        }
        else
        {
            c = c + 1;
        }

    cout<<"\n El siguiente numero par es: "<<c;


    sum = sum + c;

    cout<<"\n El acumulado de la suma es: "<<sum;

    i++;

    } while (i<3);

    b = sum *num;

    cout<<"\nLa suma acumulada multiplicada por el numero inicial da como resultado "<<b;
    
}

*/

/*

//CUARTO EJERCICIO:

/*Solicitar a una persona que digite un número entero, diga si es par o impar; de ser
par elévelo a la potencia 7 y si es impar calcule su factorial.*/
/*
main()
{
    int n, num_pot, i, b, acum, f;

    i = 1; 
    
    cout<<"Ingrese un numero entero: ";
    cin>> n;

    acum = n;
    i = 1;
        cout<<"Cual es el numero potencia: ";
    f = 1;
    if (n % 2 == 0)
    {
        cin>> num_pot;

        while (i < num_pot)
        {
            acum = n * acum;

            i++;
        }
        cout<<""<< acum;
        cout<<"\n";
    }
    else
    {
        for ( i = n; 1 < i; i--)
        {
           f = f * i;
    }
    
    cout<<"El factorial de "<<n<<" es: "<<f;
    cout<<"\n";
    }
}
*/

//QUINTO EJERCICIO: 

/*Solicite tres números y con ellos calcule: la suma del doble del primer número con
el triple del segundo menos la mitad del tercero. Repita esta operación 10 veces y
en cada una de ella imprima los números ingresados y el valor de la operación
realizada.
*/
/*
main()
{
    int num1, num2, num3, r1, r2, r3, resl_fin, otro;

    do
    {
        cout<<"Ingrese el primer numero: ";
        cin>> num1;
        cout<<"Ingrese el primer numero: ";
        cin>> num2;
        cout<<"Ingrese el primer numero: ";
        cin>> num3;

        r1 = num1 * 2;
        r2 = num2 * 3;
        r3 = num3 / 2;

        resl_fin = r1 + r2 - r3;

        cout<<"El resultado es: "<<resl_fin;

        cout<<"\nOprima 1 si quiere volver a calcular otros numeros ";
        cin>> otro; 
    } while (otro == 1);
    
}
*/

//SEXTO EJERCICIO:
/*Si una corbata cuesta una sexta parte de lo que cuesta un traje, un cinturón cuesta
    una quinta parte del mismo traje, los zapatos la mitad del valor del traje y la camisa
    dos tercios del valor de zapatos. Elabore un programa que le permita al usuario
armar su atuendo perfecto, con solo pedirle el valor de una de las prendas de vestir
y las prendas que va a llevar.*/
/*
main()
{

    float vlr, vlr_cor, vlr_cint, vlr_zap, vlr_cam, vlr_trj, cnt1, cnt2, cnt3, cnt4, cnt5, ot;
    int opt;
    

    do
    {


    cout<<"\n\n1.) El traje ";
    cout<<"\n2.) La corbata ";
    cout<<"\n3.) El cinturon ";
    cout<<"\n4.) Los zapatos ";
    cout<<"\n5.) La camisa ";
    cout<<"\n\nIngrese el producto que compro: ";
    cin>> opt;

    switch (opt)
    {
    case 1:

        cout<<"\nIngrese el valor del traje: ";
        cin>> vlr;

        vlr_cor = vlr / 6;
        vlr_cint = vlr / 5; 
        vlr_zap = vlr / 2;
        vlr_cam = vlr_zap - (vlr_zap /3);

        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;

        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;

        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;

        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;

        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;

        vlr = vlr * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr_cam = vlr_cam * cnt5;

        cout<<"\nEl valor del traje es: "<<vlr;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";
        
        break;

    case 2:

        cout<<"Ingrese el valor de la corbata: ";
        cin>> vlr;

        vlr_trj = vlr *6;
        vlr_cint = vlr_trj / 5; 
        vlr_zap = vlr_trj / 2;
        vlr_cam = vlr_zap - (vlr_zap /3);


        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;

        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;

        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;

        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;

        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;

        vlr_trj = vlr_trj * cnt1;
        vlr = vlr * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr_cam = vlr_cam * cnt5;

        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";

        break;
    
    case 3:

        cout<<"Ingrese el valor del cinturon: ";
        cin>> vlr;

        vlr_trj = vlr * 5;
        vlr_cor = vlr_trj / 6;
        vlr_zap = vlr_trj / 2;
        vlr_cam = vlr_zap - (vlr_zap /3);

        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;

        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;

        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;

        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;

        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;

        vlr_trj = vlr_trj * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr = vlr * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr_cam = vlr_cam * cnt5;

        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";
    
        break;
        
    case 4:

        cout<<"Ingrese el valor del producto: ";
        cin>> vlr;
    
        vlr_trj = vlr * 2;
        vlr_cor = vlr_trj / 6;
        vlr_cint = vlr_trj / 5; 
        vlr_cam = vlr - (vlr /3);

        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;

        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;

        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;

        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;

        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;

        vlr_trj = vlr_trj * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr = vlr * cnt4;
        vlr_cam = vlr_cam * cnt5;

        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";


        break;

    case 5:

        cout<<"Ingrese el valor del producto: ";
        cin>> vlr;

        vlr_zap = vlr + (vlr / 2);
        vlr_trj = vlr_zap * 2;
        vlr_cint = vlr_trj / 5; 
        vlr_cor = vlr_trj / 6;

        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;

        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;

        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;

        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;

        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;

        vlr_trj = vlr_trj * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr = vlr * cnt5;

        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr;
        cout<<"\n";

        break;
    
    default:

        cout<<"Ingreso mal la opción";

        break;

    }

    cout<<"Ingrese 1 si quiere repetir: ";
    cin>> ot;
    } while (ot == 1);
}
*/
//SEPTIMO EJERCICIO:
/*Si tenemos una serie de triángulos rectángulos y nos dan el valor de uno de sus
ángulos (no recto), ¿Cuál es el valor del tercer ángulo para cada uno de los
triángulos?*/

/*
main()
{
    int ang1, vlr_ang_3, otro;

    do{

    cout<<"Ingrese el angulo en grados: ";
    cin>> ang1;

    vlr_ang_3 = ang1 - 90;

    if (vlr_ang_3 < 0)
    {
        vlr_ang_3 = vlr_ang_3 * -1;
    }

    else
    {

    }

    cout<<"El valor del 3 angulo es: "<<vlr_ang_3;
    

    cout<<"\nOprima 1 si quiere volver a calcular otro angulo ";
        cin>> otro; 
    
    } while (otro == 1);

}

*/


//OCTAVO EJERCICIO: 
/*Un estudiante universitario está cursando actualmente 6 asignaturas; solicite las
notas correspondientes a cada asignatura cursada, calcule el promedio obtenido y
si es mayor que 3.5 diga que ha aprobado el semestre, de lo contrario diga que ha
reprobado.*/
/*
main()
{
    
    double nt1, nt2, nt3, nt4, nt5, nt6, prom;
    int ot;

    do
    {

    cout<<"Nota de la primera asignatura: ";
    cin>> nt1;
    cout<<"Nota de la segunda asignatura: ";
    cin>> nt2;
    cout<<"Nota de la tercera asignatura: ";
    cin>> nt3;
    cout<<"Nota de la cuarta asignatura: ";
    cin>> nt4;
    cout<<"Nota de la quinta asignatura: ";
    cin>> nt5;
    cout<<"Nota de la sexta asignatura: ";
    cin>> nt6;

    prom = (nt1 + nt2 + nt3 + nt4 + nt5 + nt6)/6;

        if (prom > 3.5)
        {
            cout<<"\nEl estudiante ha sido aprobado";
        }
        else
        {
            cout<<"\nEl estudiante ha sido reprobado";
        }

        cout<<"\n\nOprima 1 si quiere calcular el promedio de otro estudiante ";
        cin>>ot;

    } while (ot == 1);
}
*/




//NOVENO EJERCICIO:
/*La oficina de Registro y Control Académico de la UPB está procesando las
calificaciones del primer corte de los estudiantes de primer semestre de Ingeniería
de Sistemas e Informática. Si se sabe que los estudiantes están cursandoactualmente 6 asignaturas;
 solicite las notas correspondientes a cada asignatura
cursada por cada estudiante, calcule el promedio obtenido y si es mayor que 3.5
diga que ha aprobado el corte, de lo contrario diga que ha reprobado. Al finalizar se
debe conocer la cantidad de estudiantes aprobados y reprobados.*/
/*

main()
{
    double nt1, nt2, nt3, nt4, nt5, nt6, prom, ot, cont_ap, cont_rep;

    do
    {

    cout<<"Nota de la primera asignatura: ";
    cin>> nt1;
    cout<<"Nota de la segunda asignatura: ";
    cin>> nt2;
    cout<<"Nota de la tercera asignatura: ";
    cin>> nt3;
    cout<<"Nota de la cuarta asignatura: ";
    cin>> nt4;
    cout<<"Nota de la quinta asignatura: ";
    cin>> nt5;
    cout<<"Nota de la sexta asignatura: ";
    cin>> nt6;

    prom = (nt1 + nt2 + nt3 + nt4 + nt5 + nt6)/6;

        if (prom > 3.5)
        {
            cout<<"\nEl estudiante ha sido aprobado";

            cont_ap++;
        }
        else
        {
            cout<<"\nEl estudiante ha sido reprobado";

            cont_rep++;
        }

        cout<<"\n\nOprima 1 si quiere calcular el promedio de otro estudiante ";
        cin>>ot;

    } while (ot == 1);

    cout<<"El numero de estudiantes aprobados es: "<<cont_ap;

    cout<<"\nEl numero de estudiantes reprobados es: "<<cont_rep;
    cout<<"\n";
}
*/


//DECIMO EJERCICIO
/*Escriba un programa que permita leer una serie de números enteros entre -1.000 y
1.000. Con los números ingresados, calcular la suma de los números pares, el@
producto de los impares, la potencia par de los impares, la suma de los negativos. El
se ejecutará de dos formas: 1- la cantidad de veces que el usuario quiera, 2- que el
usuario seleccione un número de escape; en el momento que este número sea
ingresado finalizará la ejecución y mostrará los resultados de las operaciones.*/

//Calificar este:

/*
int main(){
    long long A, B=0, E=1, C, D, L, F=1, M, S=0, Z, N=0, X=1, K, G=0;

    cout<<"ingrese la cantidad de veces que quiere repetir el codigo: "; cin>>L;
    
do{

cout<<"\ningrese un numero: "; cin>>A;
if(A>-1000&&A<1000){

if(A>=0){
M = A%2;

if(M==0){
B = B+A;
}
else{
E=E*A;

do{
cout<<"ingrese la potencia par a la que desea elevar el numero: "; cin>>C;

                    if(C>=0){
    M = C%2;
    F = 1;
    S = 1;
        if(M==0&&C>0){
    do{
    D = 1;   
    Z = 1;
    D = D*A; 
    F = F*D;
    S = S+1; 
    }while(S<=C);
    cout<<"el valor de el numero "<<A<<" elevado a la potencia "<<C<<" es igual a: "<<F;
    G++;
}

    if(C==0){
    G++;
    Z=1;
    F=1;
    cout<<"el valor de el numero "<<A<<" elevado a la potencia "<<C<<" es igual a: "<<F;
    }  
    if(M<0||M>0){
    cout<<"lo sentimos el numero no es valido\n";
    Z=0;}
    }

    }while(Z==0);

}
}
else{
    N=N+A;
}

    X++;
}
else{
    cout<<"lo siento el numero que ha digitado no es valido";
    X--;
}

cout<<"\nsi desea terminar el programa oprima 1: "; cin>>K;
if(K==1){
    X=L+1;
}
}while(X<=L);

cout<<"\nel resultado de la sumana de los numeros pares positivos es igual a: "<<B;
cout<<"\nel producto de los numeros impares positivos es igual a: "<<E;
cout<<"\nel numero de resultados que se imprimieron de la potenciacion de los numeros impares positivos fueron: "<<G;
cout<<"\nel resultado de la sumana de los numeros negativos es igual a: "<<N;



    return 0;
}
    
*/
    
    
//Ejercicio de prueba

int main()
{
    int opt, num1, cnt_rep, rep, i, num_prcs, num_par, num_imp, num_neg, pot, cont_pot, potencia;
    opt = 0;
    i = 0;
    num1 = 1001;
    

    do{
    cout<<"Como quiere que se ejecute el programa: ";
    cout<<"\n\n1.) Opción 1";
    cout<<"\n2.) Opción 2 ";
    cin>> opt;

    }while ((opt > 3) || (opt < 0));

    if (opt == 1)
    { 
        

        cout<<"Ingrese la cantidad de veces que quiere que se repita el proceso: ";
        cin>> cnt_rep; 

        do
        {
            cout<<"Ingrese un numero entre -1000 y 1000: ";
            cin>> num1;
        } while (num1 < -1000 || num1 > 1000);
        
            num_prcs = num1;
            num_par = 0;
            num_imp = 1;
            num_neg = 0;
            cont_pot = 0;

        do
        {
            if (num_prcs % 2 == 0)
            {
                num_par = num_par + num_prcs;

            }
            else
            {
                num_imp = num_imp * num_prcs;

                do{
                cout<<"Ingrese la potencia: ";
                cin>> pot;
                
                }while(pot % 2 != 0);

                potencia = pow(num_prcs, pot);

                cont_pot = cont_pot + potencia;
            }

            if (num_prcs < 0)
            {
                num_neg = num_neg + num_prcs;
            }

            num_prcs++;

            i++;

        } while (i < cnt_rep);

        cout<<"Esta es la suma de los numeros pares: "<< num_par;
        cout<<"\nEsta es la multiplicacion de los numeros impares: "<< num_imp;
        cout<<"\nEsta es la potencia de los numeros impares: "<<cont_pot;
        cout<<"\nEsta es la suma de los negativos: "<<num_neg;

    }

    else
    {
            num_prcs = num1;
            num_par = 0;
            num_imp = 1;
            num_neg = 0;
            cont_pot = 0;
        do
        {
            do
            {
            cout<<"Ingrese un numero entre -1000 y 1000: ";
            cin>> num1;
            } while (num1 < -1000 || num1 > 1000);

            if (num_prcs % 2 == 0)
            {
                num_par = num_par + num_prcs;

            }
            else
            {
                num_imp = num_imp * num_prcs;

                do{
                cout<<"Ingrese la potencia: ";
                cin>> pot;
                
                }while(pot % 2 != 0);

                potencia = pow(num_prcs, pot);

                cont_pot = cont_pot + potencia;
            }

            if (num_prcs < 0)
            {
                num_neg = num_neg + num_prcs;
            }

            num_prcs++;

        cout<<"Esta es la suma de los numeros pares: "<< num_par;
        cout<<"\nEsta es la multiplicacion de los numeros impares: "<< num_imp;
        cout<<"\nEsta es la potencia de los numeros impares: "<<cont_pot;
        cout<<"\nEsta es la suma de los negativos: "<<num_neg;

        cout<<"Si quiere que se repita el proceso oprima 1, si no quiere eso, oprima 0: ";
        cin>> i;

        } while (i == 1);
        

        cout<<"Esta es la suma de los numeros pares: "<< num_par;
        cout<<"\nEsta es la multiplicacion de los numeros impares: "<< num_imp;
        cout<<"\nEsta es la potencia de los numeros impares: "<<cont_pot;
        cout<<"\nEsta es la suma de los negativos: "<<num_neg;

    }

}