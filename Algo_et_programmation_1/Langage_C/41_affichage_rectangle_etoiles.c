#include <stdio.h>
#include <stdlib.h>


int main() {
	int L,C,i,j;
	printf("entrer les deux entier l et L :\n");
	scanf("%d%d",&C,&L);
	for(i=1;i<=L;i++){
		for(j=1;j<=C;j++){
		printf("*");
	}	
	printf("\n");
	}
	return 0;
}
