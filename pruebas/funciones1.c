/*sumar dos numeros*/
#include <stdio.h>

/*prototipo de funcion*/
int suma(int num1, int num2);

int main()
{
    int num1, num2;
    printf("Dime el primer valor: ");
    scanf("%d", &num1);
    printf("Dime el segundo valor: ");
    scanf("%d", &num2);
    printf("la suma de %d + %d es\n", num1, num2);
    printf("%d", suma(num1, num2));
    return 0;
}
/*funcipm*/
int suma(int num1, int num2){
    return num1 + num2;
}