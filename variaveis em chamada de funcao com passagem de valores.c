#include<stdio.h>

void testar(int n1, int n2){
  n1 = -1;
  n2 = -2;
  printf("\n Valores dentro da funcao testar():");
  printf("\n n1 = %d e n2 = %d", n1, n2);
}
int main(){
  int n1 = 10;
  int n2 = 20;
  printf("\n Valores antes de chamat a funcao testar():");
  printf("\n n1 = %d e n2 = %d", n1, n2);

  testar(n1, n2);

  printf("\n Valores depois de chamar a funcao testar(): ");
  printf("\n n1 = %d e n2 = %d", n1, n2);

return 0;
}
