#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num=0;
    int i=1;

    while (i<=100)
    {
       num+=i*i;
       i++;
    }

    cout << "La suma de los numeros cuadrados entre 1 y 100 es: " << num << endl;
    
    return 0;
}

