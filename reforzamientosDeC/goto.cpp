#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // la funcion rand genera numeros aleatorios
    //la funcion srand tambien, pero cambia la semilla, por ende la secuencia 

    srand(1); 
    int randa = rand();
    int na, n, res;
    na = n;
    n= 5;
    long tot = 0;

    Evalua:
    switch (n)
    {
    case 0:
    cout << "fuera";
    goto Mueve;
        break;
    
    default:
        break;
    }

    return 0;
}



Mueve: