#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int fila1, fila2, columna1, columna2;
    cout << "Ingrese el numero de filas y columnas de la primera matriz: ";
    cin >> fila1 >> columna1;
    cout << "Ingrese el numero de filas y columnas de la segunda matriz: ";
    cin >> fila2, columna2;

    if(columna1 != fila2){
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicacion" << endl;
        return 1;
    }

    int matriz1[fila1][columna1];
    int matriz2[fila2][columna2];
    int matrizResult[fila1][columna2];

    cout << "Ingrese los valores de la primera matriz: " << endl;
    int i = 0;
    while (i < fila1) {
        int j = 0;
        while (j < columna1) {
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < fila1) {
        int j = 0;
        while (j < columna2) {
            matrizResult[i][j] = 0;
            int g = 0;
            while (g < fila2) {
                matrizResult[i][j] += matriz1[i][g] * matriz2[g][j];
                g++;
            }
            j++;
        }
        i++;
    }

    cout << "La matriz resultado de la multiplicacion es: " << endl;
    i = 0;
    while (i < fila1) {
        int j = 0;
        while (j < columna2) {
            cout << matrizResult[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}