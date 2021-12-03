#include <stdio.h>


 void multiEspecial(int n, int v1[], int v2[], int vRet[]) {
 	printf("{ ");
 	for (int i = 0; i < n; ++i) {
 		vRet[i]= v1[i] * v2[n-i-1];
 		printf("%d ",vRet[i]);
 	}printf("}");
 }




int main() {
	int n, x[15], y[15], vRet[15];
	printf("Quantos elementos pretende armazenar? ");scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		printf("Introduza o elemento %d do vetor 1: ",i+1);scanf("%d",&x[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("Introduza o elemento %d do vetor 2: ",i+1);scanf("%d",&y[i]);
	}
	multiEspecial(n,x,y,vRet);


	return 0;
}