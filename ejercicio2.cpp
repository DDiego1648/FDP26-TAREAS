
//Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.

#include <iostream>
using namespace std;

int main(){

int numero;
int suma = 0;

while(numero!=0){

    cout << "Ingrese un numero\n";
    cin >>  numero;
    
    suma = suma + numero;
}

cout << "la suma de los numero ingresados es: "<<suma<<endl;




    return 0;
}

