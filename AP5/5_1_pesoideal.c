#include <stdio.h>


int main(){
  float altura;
  char sexo;
  printf("Insira altura (metros): ");scanf("%f",&altura);
  printf("Insira sexo (M/F): ");scanf("%ch",&sexo);
  while (!(sexo=='M'||sexo=='m'||sexo=='F'||sexo=='f')) {
    scanf("%ch",&sexo);}


  if (sexo =='M'||sexo=='m') {
    printf("O peso ideal seria de %.2f quilos\n",(72.7*altura)-58);
  } else {printf("O peso ideal seria de %.2f quilos\n",(62.1*altura)-44.7);
}
  return 0;
}
