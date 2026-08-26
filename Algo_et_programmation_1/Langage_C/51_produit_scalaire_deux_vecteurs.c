#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,T[10],V[10],Produit=0;
	
	for(i=0;i<10;i++){
		printf("donner la valeur de T[%d]:",i);
		scanf("%d",&T[i]);
		printf("donner la valeur de V[%d]:",i);
		scanf("%d",&V[i]);
		Produit+=T[i]*V[i];
	}
	printf("le produit scalaire est : %d",Produit);
	return 0;
}
