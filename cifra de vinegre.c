#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
nota: as letras da chave devem emparelhar com charatecteres não alfabeticos (para correção para com o exercicio)
quando tecnicamente não é suposto segundo o que li
*/

char abc[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


char cifra(char c,char k){
	int i,j;
	for (i = 0; i < 26; ++i) {
		if (abc[i]==c) {break;}
	}
	for (j = 0; j < 26; ++j) {
		if (abc[j]==k) {break;}
	}
	if ((i+j)>25) {
		i = (i+j)-26;
	}else {i+=j;}
	return abc[i];
}

char decifra(char c,char k){
	int i,j;
	for (i = 0; i < 26; ++i) {
		if (abc[i]==c) {break;}
	}
	for (j = 0; j < 26; ++j) {
		if (abc[j]==k) {break;}
	}
	if ((i-j)<0) {
		i = (i-j)+26;
	}else {i-=j;}
	return abc[i];
}


void codifica(char *msg_original,char *msg_codificada,char *chave) {
	int j=0;

	for (int i = 0; i < strlen(msg_original); i++) {
		if (isalpha(msg_original[i])) {		
			msg_codificada[i]=cifra(msg_original[i], chave[j]);
		}else {msg_codificada[i]=msg_original[i];}
		j++;if(j==strlen(chave)){j=0;} 
	}
}


/* //retira a dependencia de string.h (WIP)
void codifica2(char *msg_original,char *msg_codificada,char *chave) { 
	int i=0;
	while (msg_original[i]!=0) {
		if (isalpha(msg_original[i])) {
			msg_codificada[i]=cifra(msg_original[i], chave);
		}
	}
}
*/


void descodifica(char *msg_codificada, char *msg_original, char *chave) {
	int j=0;

	for (int i = 0; i < strlen(msg_codificada); i++) {
		if (isalpha(msg_codificada[i])) {
			msg_original[i]=decifra(msg_codificada[i], chave[j]);
		}else {msg_original[i]=msg_codificada[i];}
		j++;if(j==strlen(chave)){j=0;} 
	}
}

void ataque(char*msg_codificada,char*chave_parcial,char*chave) {
	char frase[50];
	for (int i = 0; i < 26; i++) {
	    strcpy(chave, chave_parcial);
		strncat(chave, &abc[i],1);
		descodifica(msg_codificada,frase,chave);
		printf("chave '%s': %s\n",chave, frase);

	}




}

int main() {

	char original[30], codificada[30], chave[10], chave_parcial[10], menu;


	printf(" \n\t___|CIFRA DE VINEGRE|___\n");
	printf("Insira um número para selecionar uma opção\n");
	printf("1 - codificar \n");
	printf("2 - decodificar \n");
	printf("3 - ataque\n");
	printf("0 - sair\n ");

	gets(&menu);

	switch(menu) {

    case '1'  :
      printf("Insira frase: ");gets(original); //problemas com o uso de scanf("%s")
	  printf("Insira chave: ");gets(chave);
      codifica(original, codificada, chave);
      break;
	case '2'  :
      printf("Insira frase: ");gets(codificada);
	  printf("Insira chave: ");gets(chave);
      descodifica(codificada, original, chave);
      break;
    case '3'  :
      printf("Insira frase: ");gets(codificada);
	  printf("Insira chave parcial: ");gets(chave_parcial);
      ataque(codificada, chave_parcial, chave);
      break;
    case '0'  :
      return 0;

    default: scanf("%ch", &menu);
}

	return 0;
}