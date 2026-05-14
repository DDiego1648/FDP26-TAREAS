// serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci utilizando while.
#include <iostream>
using namespace std;

int main() {
    int N;
    int a = 0, b = 1, siguiente;
    int contador = 1;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> N;

    while (contador <= N) {
        cout << a << " ";

        siguiente = a + b;
        a = b;
        b = siguiente;

        contador++;
    }

    return 0;
}


