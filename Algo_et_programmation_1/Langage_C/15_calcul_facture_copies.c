#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	printf("entrer N:\n");
	scanf("%d",&N);
	if(N<11)
	printf("la facture est 0,30dh\n");
	else if(N<31)
	printf("la facture est 0,25dh\n");
	else
	printf("la facture est 0,20dh\n");
	return 0;
}
