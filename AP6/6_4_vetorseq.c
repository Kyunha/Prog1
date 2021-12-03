#include <stdio.h>

int contaRepeticao(int v[], int tamanhoVetor, int numero) {
	int x=v[0],count=1,count2=0;
	for (int i = 1; i < tamanhoVetor; i++) {
		if (x==v[i]) {
			count++;
		}else count=1;
		if (count>count2) count2=count;
		x = v[i];
	}
	return count2;
}

int main()
{
	int v[30],i=1,n;
	printf("Introduza números: ");
	scanf("%d",&v[0]);
	while (v[i-1] > 0) {
		scanf("%d",&v[i]);
		i++;
		
	}
	printf("Numero a procurar: ");scanf("%d",&n);
	printf("Maior sequencia: %d\n",contaRepeticao(v,i+1,n));
	return 0;
}