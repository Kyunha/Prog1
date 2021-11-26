#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
  int  i, j;
  float x, y, m=0, n=0;
  srand(0);
  printf("Número de iterações: ");scanf("%d",&j);
  for (i = 0; i < j; i++) {
    x = rand()/(float)RAND_MAX;
    y = rand()/(float)RAND_MAX;
    if (((x*x)+(y*y)) < 1) {m++;}
    n++;
    printf("pi: %f\n",(float)(4*m/n));
  }

  return 0;
}
