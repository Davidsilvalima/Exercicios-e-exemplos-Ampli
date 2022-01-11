#include <stdio.h>
int main(void){
float nota_final;
printf("\nInforme a nota final do aluno: ");
scanf("%f", &nota_final);

if (nota_final >= 60) {
    printf("\nAprovado");
} else {
if (nota_final >=50) {
    printf("\nEm recuperacao");
} else {
printf("Reprovado");
}
}
}
