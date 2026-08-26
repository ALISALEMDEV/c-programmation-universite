#include <stdio.h>
#include <stdlib.h>

int main() {
	int A,B;
	printf("entrer les deux nombres A et B:\n");
	scanf("%d%d",&A,&B);
	if(A*B>0)
	printf("les deux nombres sont de meme signe\n");
	else
	printf("les deux nombres ne sont pas de meme signe");
	return 0;
}
