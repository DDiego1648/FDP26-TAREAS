//Cuenta Regresiva
//Solicita un número y muestra una cuenta regresiva hasta 0.
#include <iostream>
using namespace std;                

int main(){


    int numero;

    cout<< "Por favor ingrese un numero\n";
    cin>> numero;

    while (numero >= 0)
    {
        cout<< numero <<"\n";
        numero--;                   
    }
    

}
