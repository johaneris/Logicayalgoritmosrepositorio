#include <iostream>

using namespace std;

void killKevin();

int main()
{
    killKevin();
    return 0;
}

void killKevin()
{
    int op;
    cout << "A quien quieres matar?" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "Matando a Kevin...";
        break;
    case 2:
        cout << "Por que mrd no mastaste a Kevin?";
        break;
    default:
        cout << "Ninguna opcion es incorrecta, mata a Kevin";
        exit(0);
        break;
    }
}