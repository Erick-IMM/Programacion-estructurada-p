#include <iostream>
#include<iostream>
using namespace std;

int main(){
    int suma,a,b,num,resta,mult,divi,x;
    cout<<"Ingresa el numero de la operacion de dos numeros que quieres realizar"<<endl;
    cout<< " 1 suma\n 2 resta\n 3 multiplicacion\n 4 division\n";
    cin>> num;
    switch(num){
        case 1:
        cout<<"Escribe el primer numero a sumar: "<<endl;
        cin>> a;
        cout<<"Escribe el segundo numero para sumar: "<<endl;
        cin>> b;
        suma= a + b;
        cout<< "El resultado de la suma es: "<<suma<<endl;
        break;

        case 2: 
        cout<<"Escribe el primer numero a restar: "<<endl;
        cin>> a;
        cout<<"Escribe el segundo numero para restar: "<<endl;
        cin>> b;
        resta= a - b;
        cout<< "El resultado de la resta es: "<<resta<<endl;
        break;

        case 3:
        cout<<"Escribe el primer numero a multiplicar: "<<endl;
        cin>> a;
        cout<<"Escribe el segundo numero para multiplicar: "<<endl;
        cin>> b;
        mult= a * b;
        cout<< "El resultado de la multiiplicacion es: "<<mult<<endl;
        break;

        case 4:
        cout<<"Escribe el primer numero a dividir: "<<endl;
        cin>> a;
        cout<<"Escribe el segundo numero para dividir: "<<endl;
        cin>> b;
        suma= a / b;
        cout<< "El resultado de la division es: "<<divi<<endl;
        break;

        default: 
        cout<<"vuelve a iniciar el programa e ingresa un numero valido";
        break;

    }
    system("pause");

return 0;
}