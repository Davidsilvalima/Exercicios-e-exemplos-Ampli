#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");

    float orcamento;
    printf("\n Digite o valor do or�amento para viagem \n");
    scanf("%f", &orcamento);
    if (orcamento >= 10000) {
        printf("\n Jo�o e maria possuem or�amento para uma viagem internacional!");
    } else {
        printf("\n Jo�o e Maria ir�o optar por uma viagem nacional.");
    }














    /*int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    if(num %2 == 0) {
        printf ("\n O n�mero � par");
    } else {
        printf ("\n O n�mero � �mpar");
    }
*/
    return 0;
}
