#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,T[10],Somme=0,Produit=1;
    float Moyenne;
	
	for(i=0;i<10;i++){
		printf("donner la valeur de T[%d]:",i);
		scanf("%d",&T[i]);
		Somme+=T[i];
		Produit*=T[i];
	}
	Moyenne=(float)Somme/i;
	printf("la somme est : %d et le produit est : %d et le moyenne est : %f",Somme,Produit,Moyenne);
	return 0;
}
