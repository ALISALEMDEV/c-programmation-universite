#include <stdio.h>
#include <stdlib.h>


int main() {
	float L,l,Surface,Piremetre;
	printf("Enter la langeur et le largeur:\n");
	scanf("%f%f",&L,&l);
	Piremetre=2*(L+l);
	Surface=L*l;
	printf("la surface est %f le piremittre est %f",Surface,Piremetre);
	return 0;
}
