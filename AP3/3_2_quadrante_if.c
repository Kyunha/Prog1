#include <stdio.h>

int main(){
  int x, y;
  scanf("%d %d",&x,&y);

  if (x > 0) {
    if (y > 0) {
      printf("Pertence ao 1º quadrante.\n");
    } else {
      printf("Pertence ao 4º quadrante.\n");
    }
  } else {
    if (y > 0) {
      printf("Pertence ao 2º quadrante.\n");
    } else {
      printf("Pertence ao 3º quadrante.\n");
    }
  }

  return 0;
}
