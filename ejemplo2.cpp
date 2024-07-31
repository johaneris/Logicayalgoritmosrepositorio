#include <iostream>
using namespace std;

int main(){
    int conversion;
    double Celsius, Fahrenheit;

    cout << "La conversión que desea realizar es:\n " ;
    cout << "1. Grados Celsius a Fahrenheit\n" ;
    cout << "2. Grados Farenheit a Celsius\n" ;
    cin >> conversion;

    if (conversion == 1) {
        cout << "Escriba la temperatura en grados Celsius: ";
        cin >> Celsius;
        Fahrenheit = (Celsius * 9.0/5.0) + 32;
        cout << "La temperatura en grados Fahrenheit es: " << Fahrenheit << endl;
    } else if (conversion == 2) {
        cout << "Escriba la temperatura en grados Fahrenheit: ";
        cin >> Fahrenheit;
        Celsius = (Fahrenheit - 32) * 5.0/9.0;
        cout << "La temperatura en grados Celsius es: "<< Celsius << endl;
    }
}