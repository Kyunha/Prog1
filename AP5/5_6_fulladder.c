#include <stdio.h>


int soma_binario(int a, int b) {
  int ci = 0,soma = 0 ,x,y,i=1;
  while (a!=0 || b!=0) {
    x=a%10;
    y=b%10;
    soma+=(x^y^ci);
    ci=((x&y)|(ci&(x^y)));
    soma*=10;
    a/=10; b/=10;
    i*=10;}
    soma+=i*ci;
  return soma;
}

int main(){
  int a,b,s,ci;
  printf("Insira em binário a: ");scanf("%d",&a);
  printf("Insira em binário b: ");scanf("%d",&b);
  printf("%d\n",soma_binario(a,b));
  return 0;
}
