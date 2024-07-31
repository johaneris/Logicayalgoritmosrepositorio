#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cal[10];
    int suma=0;
    int i=0;

    while (i<10)
    {
        cout << "Ingrese calificacion para estudiantes: ";
        cin >> cal[10];
        suma+=cal[10];
        i++;
    }
    
    double prom = suma/10;
    cout << "El promedio de las calificaciones es: " << prom << endl;
    return 0;
}

