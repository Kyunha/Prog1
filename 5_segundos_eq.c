#include <stdio.h>
int main() {
  int x, dias, horas, minutos;

  printf("Insira valor do tempo em segundos:");
  scanf("%d", &x);
  dias = x / 86400;
  x = x % 86400;
  horas = x / 3600;
  x = x % 3600;
  minutos = x / 60;
  x = x % 60;

  printf("São %d dias, %d horas, %d minutos e %d segundos.",
          dias, horas, minutos, x);

  return 0;
}
