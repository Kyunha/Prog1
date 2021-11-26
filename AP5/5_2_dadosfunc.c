#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int aleatorio(int limiteInferior, int limiteSuperior) {
  return ((rand()%limiteSuperior)+limiteInferior);}

int main(){
  int x=0,n,i;
  srand(time(0));
  printf("Quantos lancamentos? ");scanf("%d",&n);
  for (i = 0; i < n; i++) {
    if (aleatorio(1,6) == 6) {x++;}
  }
  printf("A face seis saiu %d vezes.\n",x);
  return 0;
}
