#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 99;
    cout << "Numeros impares en orden descendente entre 1 y 100: " << endl;
    while (i >= 1) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
        i--;
    }
    cout << i << endl;
    
    return 0;
}

