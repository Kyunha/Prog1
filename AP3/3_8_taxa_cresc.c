#include <stdio.h>

int main() {
  int i=0;
  float P1, P2, T1, T2;

  printf("Pais A (pop/taxa): "); scanf("%f %f",&P1, &T1);
  printf("Pais B (pop/taxa): "); scanf("%f %f",&P2, &T2);

  while ((P1<P2)||(T1>T2)) {
    printf("Pais B (pop/taxa): "); scanf("%f %f",&P2,&T2);
  }

  while (P1 >= P2) {
    P1 += P1*(T1/100);
    P2 += P2*(T2/100);
    i++;
    //printf("A: %f  B: %f \n",P1, P2);
  }

  printf("Populacao de B ultrapassara a de A em %d anos.\n",i);
  return 0;
}
