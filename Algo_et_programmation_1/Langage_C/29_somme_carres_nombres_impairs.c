#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,s,i,j;
	do{
	printf("entrer la valeur de n:");
	scanf("%d",&n);
}while(n<0);
	
	s=0;
	j=1;
	for(i=1;i<=n;i++){

		s=s+pow(j,2);
		j=j+2;
	}	
	
	printf("la valeur de s=%d",s);
	return 0;
}
