#include <stdio.h>

int main() {
  int a, b=0;
  scanf("%d",&a);

  while (a>9) {
    b += a%10;
    a = a/10;
  }
  
  printf("%d\n",b+a);
  return 0;
}
