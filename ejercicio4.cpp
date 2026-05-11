//Crea un menú que se repita hasta que el usuario elija la opción de salir.
#include <iostream>
using namespace std;

int main(){

int num1, num2;
int opcion;

while(true){
    cout << "Bienvenido al menu selecciona entre la opcion 1 para sumas, opcion 2 para restas y opcion 3 para salir\n";
    cin >> opcion;
    
    if(opcion==1){
        cout << "Ingrese el primer numero\n";
        cin >> num1;
        cout << "Ingrese el segundo numero\n";
        cin >> num2;
        cout << "La suma es: " << num1+num2 << endl;
    }
    else if(opcion==2){
        cout << "Ingrese el primer numero\n";
        cin >> num1;
        cout << "Ingrese el segundo numero\n";
        cin >> num2;
        cout << "La resta es: " << num1-num2 << endl;
    }
    else{
        cout << "Has salido del menu\n";
        break;
    }
}

    return 0;
}