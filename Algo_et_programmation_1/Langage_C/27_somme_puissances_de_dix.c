#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,s,i;

	printf("entrer la valeur de n:");
	scanf("%d",&n);
	s=0;
	for(i=0;i<=n;i++){
		s=s+pow(10,i);
	}
	printf("la valeur de s=%d",s);
	return 0;
}
