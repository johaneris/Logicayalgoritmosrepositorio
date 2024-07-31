#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int vectorLength = 0;

    cout << "Ingrese la longitud de los vectores: ";
    cin >> vectorLength;

    while (vectorLength <= 0) {
        cout << "La longitud debe ser un entero positivo. Ingrese la longitud de los vectores: ";
        cin >> vectorLength;
    }

    int vector1[vectorLength];
    int vector2[vectorLength];
    int vector3[vectorLength];

    cout << "Ingrese los valores de los vectores: " << endl;
    int i = 0;
    while (i < vectorLength) {
        cin >> vector1[i];
        i++;
    }

    i = 0;
    while (i < vectorLength) {
        cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i < vectorLength) {
        vector3[i] = vector1[i] + vector2[i];
        i++;
    }

    cout << "El resultado de la suma de vectores es: " << endl;
    i = 0;
    while (i < vectorLength) {
        cout << vector3[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}