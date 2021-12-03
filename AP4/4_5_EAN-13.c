#include <stdio.h>

int main() {
  int x,soma=0,i;
  scanf("%d",&x);

  for (i = 1; i <= 12; i++) {
    if (i%2 == 0) {
      soma += (x%10);
    }else {soma += (3*(x%10));}
    x = x/10;}
  x = ((soma/10)+1);
  x = x*10;
  printf("%d\n",(x));
  return 0;
}
