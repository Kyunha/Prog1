#include <stdio.h>

#define Pi 3.1416

int main(){
  int raio;
  printf("Insira raio: ");
  scanf("%d",&raio );
  printf("O perímetro é %.3f \n", (2*Pi*raio) );
  printf("A área é %.3f", Pi*(raio*raio) );

  return 0;
}
