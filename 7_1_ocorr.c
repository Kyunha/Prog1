#include <stdio.h>


int procuraTodos(int v[], int N, int x, int posicoes[]) {
	int j=0;
	for (int i = 0; i < N; ++i) {
		if (v[i]==x) {
			posicoes[j]=i;j++;
		}
	}
	return j;
}

int main()
{
	int v[7], N=7, x, posicoes[7];

	for (int i = 0; i < N; i++) {
		scanf("%d",&v[i]);
	}
	printf("x : ");scanf("%d",&x);
	printf("vezes repetição : %d\n",procuraTodos(v, N, x, posicoes));
	return 0;
}