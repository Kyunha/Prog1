#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int x=0,n,i;
  srand(time(0));
  printf("Quantos lancamentos? ");scanf("%d",&n);
  for (i = 0; i < n; i++) {
    if ((rand()%6)+1 == 6) {x++;}
  }
  printf("A face seis saiu %d vezes.\n",x);
  return 0;
}
