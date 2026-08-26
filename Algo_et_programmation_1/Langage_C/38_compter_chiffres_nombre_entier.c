#include <stdio.h>
#include <stdlib.h>


int main() {
	long long n,nmbr=0;
	long long temp;
	printf("entrer un entier n:\n");
	scanf("%lld",&n);
	temp=n;
	do{
		nmbr++;
		temp=temp/10;

	}while(temp>1);
	printf("%lld",nmbr);
	return 0;
}
