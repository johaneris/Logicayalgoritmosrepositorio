// leer un numero y obtener la tabla de multiplicacionde dicho numero

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingrese un numero: ";
    cin >>num;

    int count = 1;
    while (count <= 12);
    cout << num << " x " << count << " = " << num * count << endl;
    count++;
    return 0;
}

