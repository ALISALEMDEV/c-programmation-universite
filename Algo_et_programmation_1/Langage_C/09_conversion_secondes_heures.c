#include <stdio.h>
#include <stdlib.h>


int main() {
	int N,H,M,S;
	printf("entrer N:\n");
	scanf("%d",&N);
	H=N/3600;
	M=(N%3600)/60;
	S=((N%3600)%60);
	printf("les heurs est:%d les minutes est:%d les secondes est:%d\n",H,M,S);
	return 0;
}
