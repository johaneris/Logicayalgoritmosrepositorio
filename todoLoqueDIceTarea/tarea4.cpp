#include <iostream>
using namespace std;

void calcularCosto(int numAlumnos) {
    double costoPorAlumno;
    double costoTotal;

    if (numAlumnos >= 100) {
        costoPorAlumno = 60.00;
    } else if (numAlumnos >= 50) {
        costoPorAlumno = 70.00;
    } else if (numAlumnos >= 30) {
        costoPorAlumno = 100.00;
    } else {
        costoPorAlumno = 4500.00 / numAlumnos;
    }

    costoTotal = costoPorAlumno * numAlumnos;

    cout << "El costo por alumno es: $" << costoPorAlumno << endl;
    cout << "El costo total a pagar a la compañía de autobuses es: $" << costoTotal << endl;
}

int main() {
    char opcion;
    int numAlumnos;

    do {
        cout << "a. mas de 99 alumnos" << endl;
        cout << "b. de 50 a 99 alumnos" << endl;
        cout << "c. de 30 a 49 alumnos" << endl;
        cout << "d. menos de 30 alumnos" << endl;
        cout << "e. salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 'a':
                cout << "Ingrese el número de alumnos: ";
                cin >> numAlumnos;
                calcularCosto(numAlumnos);
                break;
            case 'b':
                cout << "Ingrese el número de alumnos: ";
                cin >> numAlumnos;
                calcularCosto(numAlumnos);
                break;
            case 'c':
                cout << "Ingrese el número de alumnos: ";
                cin >> numAlumnos;
                calcularCosto(numAlumnos);
                break;
            case 'd':
                cout << "Ingrese el número de alumnos: ";
                cin >> numAlumnos;
                calcularCosto(numAlumnos);
                break;
            case 'e':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 'e');

    return 0;
}