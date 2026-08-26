#include <stdio.h>
#include <stdlib.h>

int main() {
	float S1,S2,S3,Note;
	printf("entrer les trois premier semester:\n");
	scanf("%f%f%f",&S1,&S2,&S3);
	Note=(S1+S2+S3)/3;
	if(Note>=16)
	printf("Tres bien");
	else if(Note>=14 && Note<16)
	printf("Bien");
	else if(Note>=12 && Note<14)
	printf("Assez Bien");
	else if(Note>=10 && Note<12)
	printf("Passable");
	
	return 0;
}
