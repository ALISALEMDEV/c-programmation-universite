#include <stdio.h>
#include <stdlib.h>

int main() {
	float N1,N2,N3,N4,N5,S,M;
	printf("Entrer N1 et N2 et N3 et N4 et N5 :\n");
	scanf("%f%f%f%f%f", &N1,&N2,&N3,&N4,&N5);
	S=N1+N2+N3+N4+N5;
	M=S/5;
	printf("la somme est :%.2f",S);
	printf("la moyene est :%.2f",M);
	return 0;
}
