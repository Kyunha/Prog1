#include <stdio.h>


void bubblesort(float x[], int n) {
    int i, j;
    float y;
    for (i = 0; i < (n - 1); ++i){
        for (j = 0; j < n - 1 - i; ++j ){
            if (x[j] > x[j+1]) {
                y = x[j+1];
                x[j+1] = x[j];
                x[j] = y;
            }}}}

int main() {
	int n;
	float x[15], y;
	printf("Quantos elementos pretende armazenar? ");scanf("%d",&n);
	//printf("Introduza o elemento 1: ");scanf("%f",&x[0]);
	for (int i = 0; i < n; i++) {
		printf("Introduza o elemento %d: ",i+1);scanf("%f",&x[i]);
		bubblesort(x,i+1);
		printf("{ ");
		for (int j = 0; j <= i; ++j)
		{
			printf("%.1f ",x[j]);
		}printf("}\n");
	}

	return 0;
}
