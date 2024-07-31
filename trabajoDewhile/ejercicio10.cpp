#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int fila, columna;
    cout << "Ingrese el numero de filas y columnas de la matriz: ";
    cin >> fila >> columna;

    int matriz[fila][columna];
    cout << "Ingrese los elementos de la matriz: " << endl;
    int i = 0;
    while (i < fila) {
        int g = 0;
        while (g < columna) {
            cin >> matriz[i][g];
            g++;
        }
        i++;
    }

    cout << "Matriz original: " << endl;
    i = 0;
    while (i < fila) {
        int g = 0;
        while (g < columna) {
            cout << matriz[i][g] << " ";
            g++;
        }
        cout << endl;
        i++;
    }

    cout << "Matriz transpuesta: " << endl;
    i = 0;
    while (i < columna) {
        int g = 0;
        while (g < fila) {
            cout << matriz[g][i] << " ";
            g++;
        }
        cout << endl;
        i++;
    }

    return 0;
}