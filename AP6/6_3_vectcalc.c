#include <stdio.h>

float avg(float v[]) {
	int x;
	for (int i = 0; i < 10; i++) {
		x+=v[i]; //somar todos os valores do vetor
	}
	return x/10; //calcular media
}

float max(float v[]) {
	float x = v[0];
	for (int i = 1; i < 10; i++) {
		if (v[i]>x) x=v[i]; 
	}
	return x;
}

float min(float v[]) {
	float x = v[0];
	for (int i = 1; i < 10; i++) {
		if (v[i]<x) x=v[i];
	}
	return x;
}

void preencher_vetor(float v[], int n) {
	for (int i = 0; i < n; ++i) {
		printf("Introduza o elemento %d: ",i+1);scanf("%f",&v[i]);
	}
}

void imprimir_vetor(float v[], int n) {
	printf("O vetor lido foi: { ");
	for (int i = 0; i < n; ++i) {
		printf("%.2f ",v[i]);
	}
	printf("}\n");
}

int main()
{
	float v[10];
	//preencher vetor
	preencher_vetor(v,10);
	imprimir_vetor(v,10);

	printf("A media: %.2f\n", avg(v));
	printf("O maximo: %.2f\n", max(v));
	printf("O minimo: %.2f\n", min(v));
	return 0;
}