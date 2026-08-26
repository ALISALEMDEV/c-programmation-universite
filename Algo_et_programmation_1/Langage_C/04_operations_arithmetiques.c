#include <stdio.h>
#include <stdlib.h>

int main() {
	float X,Y,S;
	printf("Entrer la valeur de X et Y :\n");
	scanf("%f %f", &X,&Y);
	S=X+Y;
	printf("La somme de X et Y est :%.2f\n",S);
	S=X/Y;
	printf("La Devision de X et Y est :%.2f\n",S);
	S=X*Y;
	printf("Le produit de X et Y est :%.2f\n",S);
	S=X-Y;
	printf("La defirence de X et Y est :%.2f\n",S);
	return 0;
}
