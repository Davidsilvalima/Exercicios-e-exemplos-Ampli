#include <stdio.h>
int main(){
    char x;
    float valor, desc, total;
    printf("\n Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("\nDigite a letra que representa seu desconto de acordo com a cor: ");
    printf("\na. azul");
    printf("\nv. vermelho");
    printf("\nb. branco");
    printf("\nDigite sua opcao: ");
    scanf("%s", &x);
    switch(x) {
case 'a':
    printf("\nVoce escolheu a cor azul, seu desconto sera de 30 por cento");
    desc = 30;
    break;
case 'v':
    printf("\n Voce escolheu a cor vermelha, seu desconto sera de 20 por cento");
    desc = 20;
    break;
case 'b':
    printf("\nVoce escolheu a cor branca, seu desconto sera de 10 por cento");
    desc = 10;
    break;
default:
    printf("\nOpcao invalida, nao sera concedido desconto");
    desc = 0;
    }
    total = valor -
    (valor * desc/ 100);
    printf("\nO valor da sua compra e R$ %.2f", total);

return 0;

}
