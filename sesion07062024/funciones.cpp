#include <iostream>

#include <string.h>
#include "variables.h"
using namespace std;

int pos = 0;

int obtPos(int id){
    int posi =0;
    for(int i = 0; i < pos; i++){
        if(ciudades[i].id == id){
            posi =i;
            break;
        }
    }
    for(int i = posi; i<pos-1; i++){
        ciudades[i] = ciudades[i+1];
    }
    pos--;
}


CIUDAD ciudades[MAX_REG];

//crud
int obtPos(int id)
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(int id);
void pedirDatos();
int menu();
void principal();

//ciudades en la posicion po
void agregar(CIUDAD *c){
    ciudades[pos] = *c;
    pos++;

}

CIUDAD buscar(int id){
    for(int i = 0; i<pos; i++){
        if(ciudades[i].id == id){
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;
}

void editar(CIUDAD *c, int id){
    int posi = obtPos(id);
    strcpy(ciudad.nombre = c->nombre);
    strcpy(ciudad.descripcion, c->descripcion);
}


void eliminar(int id){
    int posi = obtPos(id);
    for(int i = posi; i<pos-1; i++){
        ciudades[i] = ciudades[i+1];
    }
    pos--;
}


int menu(){
    cout << "Menu \n";
    cout << "1. Agregar \n";
    cout << "2. Editar \n";
    cout << "3. Eliminar \n";
    cout << "4. Buscar \n";
    cout << "5. Mostrar todo \n";
    cout << "6. salir \n";
    cout << "Digite la opcion";
    cin >> op;
    return op;
}

void principal(){
    int op;
    do{
        op = menu();
        switch(op){
            case 1:
            pedirDatos();
            break;
            case 6:
            cout << "bye\n";
            break;
            default:
            cout << "uy\n"
            break;

        }

    }while(op != 6);
}


void pedirDatos(){
    CIUDAD ciudad;
    cout << "ID: ";
    cin >> ciudad.id;
    cout << "NOMBRE: ";
    cin >> ciudad.nombre;
    cout << "DESCRIPCION: ";
    cin >> ciudad.descripcion;
    agregar(&ciudad);
    cout << "Registro agregado... \n";
}

