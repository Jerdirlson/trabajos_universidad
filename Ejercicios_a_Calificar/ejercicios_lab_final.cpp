#include <iostream>
using namespace std;

/*
Elaborar  un  programa  en  lenguaje  C++(utilizando  arreglos)que  le  permita  al 
profesor  llevar  a  cabo  el  cálculo  de  la  nota  definitiva  de  laboratorio  de  Lógica  de 
programación, teniendo en cuenta las siguientes condiciones:

1.Nota de Asistencia: aquel estudiante que haya asistido a todas las clases de laboratorio 
del  semestre  se  le  asignará  calificación  de 5.0;  cada falla  injustificada  le  restará  0,5 
unidadesylas fallas con justificación formal le restará 0,25 unidades.

2.En total  se  han  tomado 10 notas a  lo  largo  del  semestre repartidas  entre  los  trabajos 
desarrollados y entregados(5), asistencias(1), los procesos de participación en clase y 
las evidencias identificadas por el profesor durante el desarrollo de los laboratorios(4).

3.La nota final del semestre para laboratorio de Lógica de Programación será equivalente 
alpromedio de las calificacionesobtenidas en el desarrollo de la asignatura.

4.El programa deberá solicitar el nombre de cada estudiante, las notas de cada una de las 
actividadesy  la  cantidad  de  fallas  reportadas  durante  el  semestre  (justificadas  y  no), 
realizar los cálculos necesarios y al finalizarimprimir el listado de los estudiantes con su respectiva nota final.
*/

int main()

{
    int cnt_estu;

    cout<<"Ingrese la cantidad de estudiantes que tiene el curso: ";
    cin >> cnt_estu;                                                //se declara la cantidad de estudiantes que tiene el curso
    string nombres[cnt_estu+1], apellidos[cnt_estu + 1];
    int id[cnt_estu+1]; 
    float lab1[cnt_estu+1], lab2[cnt_estu+1], lab3[cnt_estu+1], lab4[cnt_estu+1], lab5[cnt_estu+1];
    float partic1[cnt_estu+1], partic2[cnt_estu+1], partic3[cnt_estu+1], partic4[cnt_estu+1], nota_def[cnt_estu+1], definitiva[cnt_estu+1];
    
    float fallas_just, fallas_injust, asistencia[cnt_estu+1], nota_fallas_injust, nota_fallas_just;

    for (int i = 1; i < cnt_estu + 1; i++)                                      //Se llena para que la asistencia todos dengan 5 
    {
        asistencia[i] = 5;
    }

    for (int i = 1; i < cnt_estu + 1; i++)
    {

        fallas_just = 0;
        fallas_injust = 0;
        nota_fallas_injust = 0;
        nota_fallas_just = 0;

        cout<<"Ingrese el id del estudiante #"<<i<<" ";
        cin>> id[i];

        cout<<"Ingrese el nombre del estudiante #"<<i<<" ";
        cin>> nombres[i];

        cout<<"Ingrese el apellido del estudiante #"<<i<<" ";
        cin>> apellidos[i];

        cout<<"Ingrese cuantas fallas justificadas tuvo el estudiante: ";
        cin >> fallas_just;

        cout<<"Ingrese cuantas fallas injustificadas tuvo el estudiante: ";
        cin >> fallas_injust;

        nota_fallas_injust= fallas_injust * 0.5; 
        nota_fallas_just = fallas_just * 0.25;

        asistencia[i] = asistencia[i] - nota_fallas_injust;
        asistencia[i] = asistencia[i] - nota_fallas_just;

        cout<<"Ingrese la nota laboratorio 1 del estudiante "<<i<<": ";
        cin >> lab1[i];

        cout<<"Ingrese la nota laboratorio 2 del estudiante "<<i<<": ";
        cin >> lab2[i];

        cout<<"Ingrese la nota laboratorio 3 del estudiante "<<i<<": ";
        cin >> lab3[i];

        cout<<"Ingrese la nota laboratorio 4 del estudiante "<<i<<": ";
        cin >> lab4[i];

        cout<<"Ingrese la nota laboratorio 5 del estudiante "<<i<<": ";
        cin >> lab5[i];

        cout<<"Ingrese la nota de participacion 1 del estudiante "<<i<<": ";
        cin >> partic1[i];

        cout<<"Ingrese la nota de participacion 2 del estudiante "<<i<<": ";
        cin >> partic2[i];

        cout<<"Ingrese la nota de participacion 3 del estudiante "<<i<<": ";
        cin >> partic3[i];

        cout<<"Ingrese la nota de participacion 4 del estudiante "<<i<<": ";
        cin >> partic4[i];

        definitiva[i]= (asistencia[i] + lab1[i]+ lab2[i] + lab3[i] + lab4[i] + lab5[i] + partic1[i] + partic2[i] + partic3[i] + partic4[i])/10;

        cout<<endl;
        cout<<"El estudiante "<<nombres[i]<<" "<<apellidos[i]<<" Obtuvo un una nota definitiva de: "<<definitiva[i];

        cout<<"La nota de asistencias fue: "<<asistencia[i];
    }


}
