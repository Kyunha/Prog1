#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int vect[6] = {0};
	srand(time(0));
	for (int i = 0; i < 30; i++) {vect[rand()%6]++;}
	for (int i = 0; i < 6; i++) {
		printf("%d -  %.*s\n",i+1,vect[i],"******************************");
	}
	return 0;
}