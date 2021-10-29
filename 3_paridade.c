#include <stdio.h>

int main() {
  int num1, num2;

  scanf("%d \n", &num1 );
  scanf("%d", &num2 );

  if ( (num1%num2) == 0) {
    printf("%d é múltiplo de %d \n", num1, num2);
  } else {
    printf("%d não é múltiplo de %d \n", num1, num2);
  }

  return 0;
}
