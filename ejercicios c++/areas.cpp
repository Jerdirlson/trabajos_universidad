#include <iostream>

using namespace std;

main()
{
    int altura_triangulo,base_triangulo, base_rectangulo, altura_rectangulo, radio_circulo, at, ar, pi, ac;

    cout<<"Ingrese la altura del triangulo";
    cin>> altura_triangulo;

    cout<<"Ingrese la base del triangulo";
    cin>> base_triangulo;

    cout<<"Ingrese la base del rectangulo";
    cin>> base_rectangulo;

    cout<<"Ingrese la base del rectangulo";
    cin>> altura_rectangulo;

    cout<<"Ingrese el radio del circulo";
    cin>> radio_circulo;

    at=(altura_triangulo*base_triangulo)/2;

    ar= base_rectangulo*altura_rectangulo;

    pi=3.14;

    ac= pi* radio_circulo * radio_circulo;

        cout<<"El area del triangulo es: "<<at;
        cout<<"\nEl area del rectangulo es: "<<ar;
        cout<<"\nEl area del circulo es: "<<ac;
        cout<<"\n";
}