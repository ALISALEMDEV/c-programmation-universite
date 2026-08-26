#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float a,b,c,delta,x1,x2;
	printf("entrer les reels a et b et c: \n");
	scanf("%f%f%f",&a,&b,&c);
	delta=pow(b,2)-4*a*c;
	if(delta>0){
	
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	printf("cette equation admet deux solutions x1=%.2f et x2=%.2f",x1,x2);}
	
	if(delta==0){
	
	x1=-b/2*a;
	printf("cette equation admet une seule solution x1=%.2f",x1);}
	if(delta<0){
	
	printf("cette equation n'admet aucune solution dans R");}
	
	return 0;
}
