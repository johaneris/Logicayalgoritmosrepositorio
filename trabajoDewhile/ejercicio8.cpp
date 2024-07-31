#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int vectorLength = 0;

    cout << "Ingrese la longitud del primer vector: " << endl;
    cin >> vectorLength;

    while (vectorLength <= 0) {
        cout << "La longitud debe ser un entero positivo. Ingrese la longitud del primer vector: ";
        cin >> vectorLength;
    }

    int vector1[vectorLength];
    int vector2[vectorLength];
    int productPunto = 0;

    cout << "Ingrese los valores del primer vector: " << endl;
    int i = 0;
    while (i < vectorLength) {
        cin >> vector1[i];
        i++;
    }

    i = 0;
    cout << "Ingrese los valores del segundo vector: " << endl;
    while (i < vectorLength) {
        cin >> vector2[i];
        productPunto += vector1[i] * vector2[i];
        i++;
    }

    cout << "El producto punto de los dos vectores es: " << productPunto << endl;

    return 0;
}