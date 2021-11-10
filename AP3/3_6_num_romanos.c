#include <stdio.h>
//#define DEC[] {900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}

int main() {
  int x, i=0;
  const int DEC[12] = {900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  const char ROM[12][3] = {"CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

  scanf("%d",&x);

  while (x!=0) {
    if ((x-DEC[i]) >= 0) {
      printf("%s", ROM[i]);
      x -= DEC[i];
      i = 0;
    }
    i++;
  }
  printf("\n");
  return 0;
}
