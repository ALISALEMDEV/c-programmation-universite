#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float Xa,Ya,Xb,Yb,AB,X,Y;
	printf("entrer Xa et Ya:\n");
	scanf("%f%f",&Xa,&Ya);
	printf("entrer Xb et Yb:\n");
	scanf("%f%f",&Xb,&Yb);
	AB=sqrt(pow((Xb-Xa),2)+pow((Yb-Ya),2));
	printf("la distance AB:%f\n",AB);
	return 0;
}
