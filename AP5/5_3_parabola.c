#include <stdio.h>

void parabola(float a, float x) {
  printf("f(%.1f)=%.2f\n",x,(a*x*x));}

int main(){
  float a, x, b;
  int i,max;
  printf("Qual é o valor de a? ");scanf("%f",&a);
  printf("Qual é o intervalo? ");scanf("%f %d",&x,&max);
  printf("Qual é o incremento? ");scanf("%f",&b);
  for (x=x; x <= max; x+=b) {
    parabola(a,x);}
  return 0;
}
