#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,i;
	printf("entrer la valeur de n:");
	scanf("%d",&n);
	i=1;
	while(i<=10){
		n++;
		printf("%d",n);
		i++;
	}
	
	return 0;
}
