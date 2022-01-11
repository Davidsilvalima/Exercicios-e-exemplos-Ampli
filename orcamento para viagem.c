#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");

    float orcamento;
    printf("\n Digite o valor do orçamento para viagem \n");
    scanf("%f", &orcamento);
    if (orcamento >= 10000) {
        printf("\n João e maria possuem orçamento para uma viagem internacional!");
    } else {
        printf("\n João e Maria irão optar por uma viagem nacional.");
    }














    /*int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num %2 == 0) {
        printf ("\n O número é par");
    } else {
        printf ("\n O número é ímpar");
    }
*/
    return 0;
}
