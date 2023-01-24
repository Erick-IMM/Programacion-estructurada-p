#include <iostream>
#include<string>
using namespace std;
/*
Nombre: Erick Israel Martin Mariscal
Fecha: 24/01/2023
Programa: Actividad 1.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION/2DO SEMESTRE
Profesor: Carlos Javier Cruz Franco
Descripcion: el programa pide datos del alumno y despues los expresa
*/

int main(){
    string nombre,residencia,carrera;  //se definen las variables que llevan texto como string y las de numeros enteros como int
    int semestre,edad,dia,mes,year;

    cout<<"Escribe tu nombre:"<<endl;  //se van pidiendo e ingresando los datos
    getline(cin, nombre);
    cout<<"Ingresa en numeros tu edad:"<<endl;
    cin>>edad;
    cout<<"Ingresa en numeros el dia de tu nacimiento:"<<endl;
    cin>>dia;
    cout<<"Ingresa en numeros tu mes de nacimiento:"<<endl;
    cin>>mes;
    cin.ignore();
    cout<<"Ingresa en numeros tu año de nacimiento"<<endl;
    cin>>year;
    cin.ignore();
    cout<<"Ingresa tu actual lugar de residencia"<<endl;
    getline(cin, residencia);
    cout<<"Escribe el nombre de tu carrera:"<<endl;
    getline(cin, carrera);
    cout<<"Ingresa en numeros tu semestre actual:"<<endl;
    cin>>semestre;
    
 //se genera un parrafo de presentacion con los datos ingresados
    cout<<"Alumno/a "<<nombre<<" de "<<edad<<" años de edad"<<" nacido/a el "<<dia<<"/"<<mes<<"/"<<year<<"\n ciudadano de "<<residencia<<" estudia la carrera de "<<carrera<<" cursando el "<<semestre<<" semestre"<<endl;
return 0;
}