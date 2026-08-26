#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int X,Y,S;
	printf("entrer les deux reels X et Y:\n");
	scanf("%d%d",&X,&Y);
	S=pow(X,Y);
	printf("la solution est:%d\n",&S);
	return 0;
}
