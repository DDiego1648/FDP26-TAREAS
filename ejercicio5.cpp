//Suma de Números Pares
//Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.
#include <iostream>
using namespace std;

int main(){
int numero=0;
int suma=0;
int contador=1;

    
    cout<< "Por favor ingrese un numero mayor o igual a 1"<<endl;
    cin >> numero;
 

while(contador<=numero){

    if(numero % 2==0){
        suma +=contador;
    }
    contador++;
}

 cout << "El resultado de su suma es: "<<suma<<endl;
    

return 0;
}   
    
    
    
    
    


