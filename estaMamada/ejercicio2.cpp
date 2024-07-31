
/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>
using namespace std;

int main()  
{
    int i = 100;
    cout << "Imprimiendo los números impares en orden descendente entre 1 y 100:" << endl;

    while (i >= 1)  
    {
        if (i % 2 != 0) 
        {
            cout << i << endl;  
        }
        i--; 
    
    cout << endl;  
    return 0;  
}




