#include <stdio.h>


int compacta(char orig[], int N, char dst[]) {
	dst[0]=orig[0];
	int j = 1;
	for (int i = 1; i < N; i++)	{
		if (orig[i-1]!= orig[i]) {
			dst[j]=orig[i];
			j++;
		}
	}
	return j;
}

int main() {
	char orig[40], dst[40];
	int N=0;

	while (orig[N-1]!='.') {scanf("%s",&orig[N]);N++;}
	N--;
 
	printf("vezes repetição : %d\n",compacta(orig, N, dst));
	return 0;
}