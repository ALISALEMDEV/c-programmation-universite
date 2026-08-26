#include <stdio.h>
#include <stdlib.h>


int main() {
	int n;
	float s,i;
	printf("entrer la valeur de n:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++){
		s=s+(1/i);
	}
	printf("la valeur de s=%.2f",s);
	return 0;
}
