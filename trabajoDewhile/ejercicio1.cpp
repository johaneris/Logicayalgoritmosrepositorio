
/*. Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/


#include <iostream>
using namespace std;

int main() {
    int n, suma = 0; 
    int i = 1; 

    cout << "Ingrese un numero natural: ";
    cin >> n;

    while (i <= n) { 
        suma += i;
        i++; 
    }
   cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
