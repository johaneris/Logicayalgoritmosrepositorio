#include <iostream>

using namespace std;

double costoAdicional(double km){
    double costo = 0;
    if (km < 500){
        costo = 30;
    }
    else if (km < 1000){
        costo = 30 + (5.0/100)*30;
    }
    else {
        costo = 30 + (8.0/100)*30;
    }
    return costo;
}

double calcularImpuesto(double monto){
    return monto * 0.15;
}

int main(int argc, char const *argv[]){
    double km;
    cout << "Ingrese los kilometros: ";
    cin >> km;

    double costosinImpuestos = costoAdicional(km);
    double costosconImpuestos = calcularImpuesto(costosinImpuestos);
    cout << "Alquiler del vehiculo sin impuestos: " << costosinImpuestos << endl;
    cout << "Alquiler del vehiculo con impuestos: " << costosconImpuestos << endl;
    return 0;
}