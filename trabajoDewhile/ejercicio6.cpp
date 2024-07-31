#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int num = 0;
    int i = 200;

    while (i >= 100) {
        if (i % 2 == 0) {
            num+= i;
        }
        i--;
    }

    cout << "La suma de los numeros pares comprendidos entre 100 y 200: " << num << endl;

    return 0;
}