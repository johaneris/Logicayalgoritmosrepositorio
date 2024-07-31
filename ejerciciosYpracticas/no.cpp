#include <iostream>

using namespace std;

/*variable global*/

#define MAX 1000

//VARIABLE GLOBAL
int nums[1000];
int pos = 0; //posicion del elemento en el arreglo
int suma = 0

void agregarNum(int num){
    if(pos<MAX){
        nums[pos] = num;
        pos++;
    }else{
        cout << "no se puede agregar el numero\n";
    }

}

int sumar (int ultElem){
    if(ultElem == 0){
        return suma;
    }
    suma = suma + nums[ultElem];
    sumar(ultElem -1);
    
   
}

 void menu(){
        int op;
        cout << "1. Agregar  elemento" << endl;
        cout << "2. sumar" <<endl;
        cout << "3. Mostrar" << endl;
        cout << "4. salir" << endl;
        cin >> op;
    }
