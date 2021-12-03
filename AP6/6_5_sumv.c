#include <stdio.h>
#include <math.h>

int sum_v(float x[], int n, float vRet[]) {
	int i=0, i2=0;
	printf("Vetor Soma: { ");
	while (i<n){
		vRet[i2]=x[i]+x[i+1];
		printf("%.2f ",vRet[i2]);
		i2++;
		i+=2;
	}
	printf("}\n");
	return i2;
}

float range_v(float x[], int n) {
	float max=x[0], min=x[0];
	for (int i = 1; i < n; i++) {
		if (x[i] > max) max=x[i];
		if (x[i] < min) min=x[i];
	}
	return (max-min);
}

int diff_v(float x[], int n, float vRet[]){
	int i=0, i2=0;
	printf("Vetor Desvio Max Par: { ");
	while (i<n){
		printf("%.2f ",vRet[i2]-sqrt(x[i]*x[i+1]));
		i2++;
		i+=2;
	}
	printf("}\n");
	return i2;
}


int main()
{
	int n;
	float vRet[20], x[30];
	printf("Quantos elementos pretende armazenar? ");scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		printf("Introduza o elemento %d: ",i+1);scanf("%f",&x[i]);
	}
	sum_v(x,n,vRet);
	printf("Gama: %.2f\n",range_v(x,n));
	diff_v(x,n,vRet);

	return 0;
}