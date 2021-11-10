#include <stdio.h>

int main() {
  int n, j, i;
  float c;

  printf("Qual o capital inicial? ");
  scanf("%f", &c);
  printf("Qual a taxa de juro dada pelo banco? ");
  scanf("%d", &j);
  printf("Durante quantos anos? ");
  scanf("%d", &n);

  for (i = 0; i < n ; i++) {
    c = c * (1 + (j/100));
  }

  printf("O capital acumulado ao fim de %d anos é de %.3f euros\n", n, c);
  return 0;
}
