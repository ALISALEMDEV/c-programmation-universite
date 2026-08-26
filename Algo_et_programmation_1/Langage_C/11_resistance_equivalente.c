#include <stdio.h>
#include <stdlib.h>

int main() {
	float R1,R2,R3,Req;
	printf("entrer les valeurs des R1 et R2 et R3:\n");
	scanf("%f%f%f",&R1,&R2,&R3);
	Req=R1+R2+R3;
	printf("la resistnce equivalente en serie est:%.2f\n",Req);
	Req=1/(1/R1+1/R2+1/R3);
	printf("la resistnce equivalente en parllele est:%.2f\n",Req);
	return 0;
}
