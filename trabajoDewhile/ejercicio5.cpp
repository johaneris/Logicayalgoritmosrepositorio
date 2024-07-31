#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    const int numStudents = 8;
    int grades[numStudents], suma = 0, apropados = 0, reprobados = 0;
    double prom;

    int i = 0;
    while (i < numStudents) {
        cout << "Ingrese las calificaciones para estudiantes: ";
        cin >> grades[i];
        suma += grades[i];

        if (grades[i] >= 70) {
            apropados++;
        } else {
            reprobados++;
        }
        i++;
    }

    prom = static_cast<double>(suma) / numStudents;
    cout << "El promedio general del grupo es: " << prom << endl;
    cout << "La cantidad de estudiantes aprobados es: " << apropados << endl;
    cout << "La cantidad de estudiantes reprobados es: " << reprobados << endl;

    return 0;
}
