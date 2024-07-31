#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "variablesPT.h"

using namespace std;

void registroNuevoPaciente();

void registroNuevoPaciente(){
    int opGenSec;

     ofstream archivo3;
    string nombreA;

    cout << "Ingresar el nombre del archivo: " << endl;
    getline(cin , nombreA);

    archivo3.open(nombreA.c_str(),ios::out);

    if(archivo3.fail()){
        cout << "Ocurrió un error al tratar el abrir el archivo" << endl;
        exit(1);
    }
    
    
    cout << "Datos del paciente" << endl;
    cout << "Nombre: " << endl;
    cin >> usuario.nombre; 
    cin.ignore();
    cout << "Apellido: " << endl;
    cin >> usuario.apellido; 
    cin.ignore();
    cout << "Edad: " << endl;
    cin >> usuario.edad; 
    cin.ignore();
    cout << "Fecha de nacimiento" << endl;
    cout << "Dia: " << endl;
    cin >> usuario.dia;
    cin.ignore();
    cout << "Mes: " << endl;
    cin >> usuario.mes;
    cin.ignore();
    cout << "Anio: " << endl;
    cin >> usuario.año;
    cin.ignore();
    cout << "Cedula: " << endl;
    cin >> usuario.cedula;
    cin.ignore();
    cout << "Genero: " << endl;
    cin >> usuario.genero;
    cin.ignore();
    cout << "¿Desea agregar genero secundario? (1=SI/2=N)" << endl;
    cin >> opGenSec;
    cin.ignore();
    if (opGenSec == 1)
    {
        cout << "Genero secundario: " << endl;
        cin >> usuario.generoSec;
        cin.ignore();
    }
    else if (opGenSec == 2)
    {
        cout << "No se ha agregado genero secundario..." << endl;
    }
    else
    {
        cout << "Ninguna opcion es valida..." << endl;
        exit(0);
    }
    cout << endl;
    cout << "Ciudad: " << endl;
    cin >> usuario.ciudad;
    cin.ignore();
    cout << "Direccion: " << endl;
    cin >> usuario.direccion;
    cin.ignore();
    cout << "Telefono: " << endl;
    cin >> usuario.telefono;
    cin.ignore();
    cout << "Correo: " << endl;
    cin >> usuario.correo;
    cin.ignore();
    cout << "Relacion" << endl;
    cout << "1. Casado" << endl;
    cout << "2. Soltero" << endl;
    cout << "3. Divorciado" << endl;
    cin >> usuario.relacion;
    cin.ignore();
    cout << "El paciente ha sido registrado..." << endl;


    archivo3 << usuario.nombre << endl;
    archivo3 << usuario.apellido << endl;
    archivo3 << usuario.edad << endl;
    archivo3 << usuario.dia << endl;
    archivo3 << usuario.mes << endl;
    archivo3 << usuario.año << endl;
    archivo3 << usuario.cedula << endl;
    archivo3 << usuario.edad << endl;
    archivo3 << usuario.direccion << endl;
    archivo3 << usuario.telefono << endl;
    archivo3 << usuario.correo << endl;
    archivo3 << usuario.relacion << endl;
    
    archivo3.close();
}