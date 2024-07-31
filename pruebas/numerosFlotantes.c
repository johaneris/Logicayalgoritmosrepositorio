#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[10];

    numbers[0]= 12;
    numbers[1]= 1.68;
    numbers[2]= 2.680;
    numbers[3]= 3.5;
    numbers[4]= 1512.222222;
    numbers[5]= 12.222222;
    numbers[6]= 3.14;
    numbers[7]= 4.14;
    numbers[8]= 5.14;
    numbers[9]= 6.14;

    printf("Elemento # 1 %.2f\n", numbers[0]);
    printf("Elemento # 2 %.2f\n", numbers[1]);
    printf("Elemento # 3 %.2f\n", numbers[2]);
    printf("Elemento # 4 %.2f\n", numbers[3]);
    printf("Elemento # 5 %.2f\n", numbers[4]);
    printf("Elemento # 6 %.2f\n", numbers[5]);
    printf("Elemento # 7 %.2f\n", numbers[6]);
    printf("Elemento # 1 %.2f\n", numbers[7]);
    printf("Elemento # 9 %.2f\n", numbers[8]);
    printf("Elemento # 10 %.2f\n", numbers[9]);

    printf("suma\n");

    float sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9];

    printf("la suma es %f\n", sum);


    return 0;
}
