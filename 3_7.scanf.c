#include <stdio.h>

int main() {
  int x, max, min, i=1;
  float med = 0;

  scanf("%d",&x);
  max = min = med = x;

  while (1) {
    if (scanf("%d",&x) != 1) {
      break;
    }
    if (x > max) {
      max = x;
    } else if (x < min) {
      min = x;
    }
    med += x;
    i++;
  }
  printf("O mínimo é %d.\n",min);
  printf("O máximo é %d.\n",max);
  printf("A média é %.2f.\n",med/i);
  return 0;
}
