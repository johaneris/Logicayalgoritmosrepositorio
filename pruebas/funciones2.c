#include<stdio.h>

/*Calculae la nota de un estudiante que posee un acumulado de 60 puntos y un examen de 40 puntos
Decir i esta aprobado o reprobado. Un estudaidnte apeba su es mayor o igual a 70*/

int calFinalSc(int score, int exam);

void valFinalSc(int score);

void pedirNotas();

int main(int argc, char const *argv[])
{
    pedirNotas();
    return 0;

}

void pedirNotas(){
    int acumulado, examen, nota, notaFinal;
    printf("Dime el acumulado: ");
    scanf("%d", &acumulado);
    printf("dime la nota del examen: ");
    scanf("%d", &examen);
    notaFinal = calFinalSc(acumulado, examen);
    printf("nota final %d\n", notaFinal);
    valFinalSc(notaFinal);
}

int calFinalSc(int score, int exam){
    return score + exam;
}

void valFinalSc(int score){
    if(score >= 70) printf("Aprobado...");
    else printf("reprobado :(");
}