#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j,k;
	printf("x*y ");
	for(j=1;j<=10;j++){
		printf("%d  ",j);
	}
	printf("\n");
	for(j=1;j<=10;j++){
		printf("____",j);
	}
	printf("\n");	
	for(i=1;i<=10;i++){
		printf("%d  |",i);
		for(j=1;j<=10;j++){
			k=i*j;
		printf("%d  ",k);
	}	
	printf("\n");
	}
	return 0;
}
