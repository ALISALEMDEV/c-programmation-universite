#include <stdio.h>
#include <stdlib.h>


int main() {
	int annee;
	printf("entrer la valeur de n:");
	scanf("%d",&annee);
	if(annee%4==0)
	printf("bissextile");
	else
	printf("ne pas bissextile");
	return 0;
}
