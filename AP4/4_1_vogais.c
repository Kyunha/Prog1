#include <stdio.h>

int main() {
  int vog[5]={0,0,0,0,0}, i,j;
  char frase[100];
  printf("Insiraq frase: ");
  scanf("%s",frase);

  for (i = 0; frase[i] != '\0'; ++i);
  for (j = 0; j < i; j++) {
    switch (frase[j]) {
      case 'a':case 'A':vog[0]++;break;
      case 'e':case 'E':vog[1]++;break;
      case 'i':case 'I':vog[2]++;break;
      case 'o':case 'O':vog[3]++;break;
      case 'u':case 'U':vog[4]++;break;
    }
  }
  printf("A: %d\n",vog[0]);
  printf("E: %d\n",vog[1]);
  printf("I: %d\n",vog[2]);
  printf("O: %d\n",vog[3]);
  printf("U: %d\n",vog[4]);

  return 0;
}
