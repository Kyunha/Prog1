#include <stdio.h>

int main() {
  int x,x2=0;
  scanf("%d", &x);

  while (x != 0)  {
    x2 = x2*10;
    x2 += x%10;
    x = x/10;
  }
  printf("%d\n",x2);
  return 0;
}
