#include <stdio.h>
#include<math.h>

float dist(float a1,float a2,float b1,float b2) {
  return sqrt(pow(a1-b1,2)+pow(a2-b2,2));}

int main(){
  float a1, a2, b1, b2;
  int ra, rb;
  printf("Coordenadas de a e raio: ");scanf("%f %f %d",&a1,&a2,&ra);
  printf("Coordenadas de b e raio: ");scanf("%f %f %d",&b1,&b2,&rb);
  if (dist(a1, a2, b1, b2) < (ra+rb)) {
    printf("Há colisão\n");
  } else {printf("Não há colisão\n");}
  return 0;
}
