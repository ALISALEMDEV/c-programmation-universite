#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,s,i;
	do{
	printf("entrer la valeur de n:");
	scanf("%d",&n);
}while(n<0);
	
	s=0;
	for(i=1;i<=n;i++){
		s=s+500+3*i;
	}
	printf("la valeur de s=%d",s);
	return 0;
}
