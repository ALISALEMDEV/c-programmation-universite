#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,i,S;
	do{
	printf("entrer un entier n:\n");
	scanf("%d",&n);	
	}while(n<0);
	for(i=2;i<n;i++){
		S=1;
	if(n%i==0){
		printf("nest pas un nombre premiere");
		S=0;
		break;
	}
	
	}
		if(S==1){
		printf("est un nombre premiere");
	}
	return 0;
}
