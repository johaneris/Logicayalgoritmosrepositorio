#include <iostream>
using namespace std;

#define MAX 100

int vector [MAX]; //arreglo o vector
int pos=0; //posicion o ubicacion del elemento

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cant;//almacernar la cantidad de elemtnto
    int num;
    cout << "Dime cuantos numeros deseas almacenar: ";
    cin >> cant;
    for(int i = 0; i < cant; i++){
        cout << "dime un numero: ";
        cin >> num;
        agregar(num);
    }

    cout << "mostrar numeros\n";
    mostrar();
    return 0;
}

void agregar(int num){
    vector[pos] = num;
    pos++;

}

void mostrar(){
    for(int i = 0; i<=pos; i++){
        cout << vector[i] << endl;
    }
}