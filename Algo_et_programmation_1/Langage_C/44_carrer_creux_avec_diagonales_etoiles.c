#include <stdio.h>
#include <stdlib.h>

int main() {
	int L,i,j;
	printf("entrer le nombre L :\n");
	scanf("%d",&L);
	for(i=1;i<=L;i++){
		for(j=1;j<=L;j++){
		if(i==1||i==L||j==1||j==L||j==i||j==L-i+1){
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
