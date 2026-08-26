#include <stdio.h>
#include <stdlib.h>

int main() {
	int L,C,i,j;
	printf("entrer le nombre L et C:\n");
	scanf("%d%d",&L,&C);
	for(i=1;i<=L;i++){
		for(j=1;j<=C;j++){
		if(i==1||i==L||j==1||j==C){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
		printf("\n");	
	}
	return 0;
}
