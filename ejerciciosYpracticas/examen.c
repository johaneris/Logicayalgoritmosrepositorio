#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("El primer numero (%d) es mayor que el segundo numero (%d).\n", num1, num2);
        printf("El segundo numero (%d) es menor que el primer numero (%d).\n", num2, num1);
    } else if (num1 < num2) {
        printf("El segundo numero (%d) es mayor que el primer numero (%d).\n", num2, num1);
        printf("El primer numero (%d) es menor que el segundo numero (%d).\n", num1, num2);
    } else {
        printf("Ambos numeros son iguales: %d\n", num1);
    }

    return 0;
}