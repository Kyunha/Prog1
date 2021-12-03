#include <stdio.h>

int main() {
  int linhas,colunas,i,j;
  char x;
  printf("Simbolo: ");scanf("%c",&x);
  printf("Linhas e colunas: ");scanf("%d %d",&linhas,&colunas);

  for (i = 0; i < colunas; i++) {
    printf("%c",x);
  }printf("\n%c",x);

  for (i = 0; i < (linhas-2); i++) {
    for (j = 0; j < (colunas-2); j++) {
      printf(" ");
    }printf("%c\n%c",x,x);
  }

  for (i = 0; i < (colunas-1); i++) {
    printf("%c",x);
  }printf("\n");

  return 0;
}
