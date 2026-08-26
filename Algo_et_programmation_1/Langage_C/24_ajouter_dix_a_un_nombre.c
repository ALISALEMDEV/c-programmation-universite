#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,i;
	printf("entrer la valeur de n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		n++;
	}
	printf("la valeur de n=%d",n);
	return 0;
}
