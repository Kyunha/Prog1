#include <stdio.h>

int main() {
  int x=2, n, i=0, i2,j=0;
  printf("Insira o numero de numeros primos que pretende: ");
  scanf("%d",&n);

  while (i<n) {
    j = 0;
    for (i2 = 2; i2 < x; i2++) {
      if ((x%i2)==0) {
        j = 1;
      } }      
    if (j == 0) {
      printf("%d\n",x);
      i++;
    }
    x++;
  }
  return 0;
}
