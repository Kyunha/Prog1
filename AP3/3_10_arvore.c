#include <stdio.h>

int main() {
  int h, i, j;
  printf("altura: ");scanf("%d",&h);
  while (h<4) {
    printf("altura: ");scanf("%d",&h);
  }

  for (i = 0 ; i <= h; i++) {
    for (j = 0; j < (h-i); j++) {
      printf(" ");
    }
    for (j = 0; j < (1+(2*i)); j++) {
      printf("*");
    }
    printf("\n");
  }

  for (j = 0; j < (h); j++) {
    printf(" ");
  } printf("*\n");

  return 0;
}
