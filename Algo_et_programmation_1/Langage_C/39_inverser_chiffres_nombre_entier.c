#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,inverse=0;
	printf("entrer un entier n:\n");
	scanf("%d",&n);
    do{
        inverse=(inverse*10)+(n%10);
        n=n/10;

    }while(n!=0);
    printf("%d",inverse);
	return 0;
}
