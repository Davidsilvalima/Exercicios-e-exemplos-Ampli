#include<stdio.h>

float t1, t2;

float calcularMedia(){
  return (t1 + t2) / 2;
}
int main(){
  printf("\n Digite as duas temperaturas: ");
  scanf("\n%f \n%f", &t1, &t2);
  printf("\n A temperatura media e %.2f ºC ", calcularMedia());

  return 0;
}
