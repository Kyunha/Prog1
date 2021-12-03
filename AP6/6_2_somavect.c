#include <stdio.h>

void preencher_vetor(float v[], int n) {
	for (int i = 0; i < n; ++i) {
		printf("Introduza o elemento %d: ",i+1);scanf("%f",&v[i]);
	}
}

float somatorio_vetor(float v[], int n) {
	float r=0;
	for (int i = 0; i < n; ++i) {
		r+=v[i];
	}
	return r;
}

void imprimir_vetor(float v[], int n) {
	printf("O vetor lido foi: { ");
	for (int i = 0; i < n; ++i) {
		printf("%.1f ",v[i]);
	}
	printf("}\n");
}

int main()
{
	float v[15];
	int n;
	printf("Quantos elementos pretende armazenar? ");scanf("%d",&n);
	while(n>15) {
		printf("Limite de 15: ");scanf("%d",&n);
	}
	preencher_vetor(v,n);
	imprimir_vetor(v,n);
	printf("A soma dos seus elementos; %.2f\n", somatorio_vetor(v,n));
	return 0;
}