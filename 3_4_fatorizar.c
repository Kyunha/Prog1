#include <stdio.h>

int main() {
  int a,i=2;
  scanf("%d",&a);
  while (i<a) {
    if ((a%i)==0) {
      printf("%d ",i);
      a = a/i;
      i = 2;
    }
    i++;
  }
  printf("%d\n",a);
  return 0;
}
