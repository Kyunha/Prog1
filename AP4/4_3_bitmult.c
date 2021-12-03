#include <stdio.h>

int main() {
  int x,y,i=0;
  printf("Operando: ");scanf("%d",&x);
  printf("Operando (potência base 2): ");scanf("%d",&y);
  while ((y%2)==0) {y = y/2; i++;}
  printf("%d\n",(x<<i));
  return 0;
}
