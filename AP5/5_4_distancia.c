#include <stdio.h>
#include<math.h>

float dist(float a1,float a2,float b1,float b2) {
  return sqrt(pow(a1-b1,2)+pow(a2-b2,2));}

int main(){
  float a1, a2, b1, b2;
  printf("Quais as coordenadas de a? ");scanf("%f %f",&a1,&a2);
  printf("Quais as coordenadas de b? ");scanf("%f %f",&b1,&b2);
  printf("Distancia: %.3f \n",dist(a1, a2, b1, b2));
  return 0;
}
