#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
int idade;
printf("\n Digite sua idade: ");
scanf("%d", &idade);
if (idade >= 18) {
    printf ("\n Voc� j� pode tirar sua carteira de habilita��o. voc� � maior de 18");

}
return 0;
}
