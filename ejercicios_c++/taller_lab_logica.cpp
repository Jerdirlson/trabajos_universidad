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

main()
{   
    int num_cam, i, cont_cam, prec_cam, ttl_prc_cam, num_pant, prec_pant, ttl_prc_pant, cont_pant, num_zap, prec_zap, ttl_prc_zap, cont_zap,prec_cha, ttl_prc_cha, cont_cha, num_cha, num_lib, cont_lib, opt, val_lib1, ttl_val_lib1, val_lib2, ttl_val_lib2, val_lib3, ttl_val_lib3,val_lib4, ttl_val_lib4, cont_lib, ttl_libros, total;

    cont_cam = 0;
    ttl_prc_cam = 0;

        cout<<"Ingrese la cantidad de las camisas que compro: ";
        cin>>num_cam;

    do
    {
        cout<<"Ingrese el precio de las camisas: ";
        cin>>prec_cam;

        ttl_prc_cam = ttl_prc_cam + prec_cam;

        cont_cam++;
    } 
    while (cont_cam < num_cam);

    cout<<"\nEl precio total de las camisetas es: "<<ttl_prc_cam;
    
    cout<<"Ingrese la cantidad de pantalones que compro: ";
        cin>>num_pant;

    do
    {
        cout<<"\nIngrese el precio de los pantalones: ";
        cin>>prec_pant;

        ttl_prc_pant = ttl_prc_pant + prec_pant;

        cont_pant++;
    } while (cont_pant < num_pant);

    cout<<"\n El precio total de los pantalones es: "<<ttl_prc_pant;

    cout<<"\nIngrese la cantidad de pares de zapatos que compro: ";
        cin>>num_zap;

    do
    {
        cout<<"\nIngrese el precio de los pares de zapatos: ";
        cin>>prec_zap;
        
        ttl_prc_zap = ttl_prc_zap + prec_zap;

        cont_zap++;
    } while (cont_zap < num_zap);
    
    cout<<"\n El precio total de los zapatos es: "<<ttl_prc_zap;
    
    cout<<"\nIngrese la cantidad de chaquetas que compro: ";
        cin>>num_cha;

    do
    {
        cout<<"\nIngrese el precio de las chaquetas: ";
        cin>>prec_cha;
        
        ttl_prc_cha = ttl_prc_cha + prec_cha;

        cont_cha++;
    } while (cont_cha < num_cha);

    cout<<"\n El precio total de las chaquetas es: "<<ttl_prc_cha;
    
    cout<<"\nIntroduzca cuantos libros compró: ";
    cin>>num_lib;

    while (cont_lib < num_lib)
    {
        cout<<"\nElija que tipo de libro compró: ";
        cout<<"\n1.)Programacón.";
        cout<<"\n2.)Innovación.";
        cout<<"\n3.)Emprendimiento.";
        cout<<"\n4.)Lógica de programación.";
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

            ttl_val_lib2 = ttl_val_lib2 + val_lib2
        
        case 3:
            cout<<"Ingrese el valor del libro de emprendimiento: ";
            cin>>val_lib3;

            ttl_val_lib3 = ttl_val_lib3 + val_lib3;

        case 4: 
            cout<<"Ingrese el valor del libro de lógica de programación: ";
            cin>>val_lib4;

            ttl_val_lib4 = ttl_val_lib4 + val_lib4;

        default:
            cout<<"No selecciono una opción valida";
            break;
        }
        
        cont_lib++;
    }

    ttl_libros = ttl_val_lib1 +ttl_val_lib2 + ttl_val_lib3 + ttl_val_lib4;

    total = ttl_prc_cam + ttl_prc_pant + ttl_prc_zap + ttl_prc_cha + ttl_libros;

    cout<<"El costo total de todas las cosas es: "<<total;
    
    

}

//Tercer ejercicio

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