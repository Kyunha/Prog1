#include <stdio.h>

int main(){
  int x[3], y, i;
  scanf("%d %d %d" ,&x[0],&x[1],&x[2]);
  for (i = 0; i < 2; i++) {

    if (x[1]<x[0]) {
      y = x[0];
      x[0] = x[1];
      x[1] = y;
    }
    if (x[2]<x[1]) {
      y = x[1];
      x[1] = x[2];
      x[2] = y;
    }

    }

  printf("%d, %d, %d",x[0],x[1], x[2] );
  return 0;
}
