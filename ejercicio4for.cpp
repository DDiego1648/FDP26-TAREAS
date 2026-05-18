//Tabla de Multiplicar
//Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.

#include <iostream>
using namespace std;
int main(){

int numero;
int multiplicacion;

cout << "Por favor ingrese el numero que quiera ver su tabla de multiplicar\n";
cin >> numero;

for (int i = 1; i <= 10; i++){

    cout << numero<<" x "<<i<<" = "<<numero * i<<"\n";
}



    return 0;
}

