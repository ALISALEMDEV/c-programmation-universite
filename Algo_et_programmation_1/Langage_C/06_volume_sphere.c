#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	const float Pi=3.14;
	float r,V;
	printf("Entrer le rayon de sphere:\n");
	scanf("%f",&r);
	V=(4*Pi*pow(r,3))/3;
	printf("le volume de sphere est:%.2f",V);
	return 0;
}
