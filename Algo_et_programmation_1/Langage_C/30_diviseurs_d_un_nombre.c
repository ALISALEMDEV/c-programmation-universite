#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,i;
	do{
	printf("entrer la valeur de n:");
	scanf("%d",&n);
}while(n<0);
	
	for(i=1;i<=n;i++){
		if(n%i==0)
		printf("%d\n",i);
	}
	
	return 0;
}
