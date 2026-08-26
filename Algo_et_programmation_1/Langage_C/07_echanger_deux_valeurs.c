#include <stdio.h>
#include <stdlib.h>


int main() {
	int X,Y,Z;
	printf("entrer X et Y:\n");
	scanf("%d%d",&X,&Y);
	Z=Y;
	Y=X;
	X=Z;
	printf("X=%d et Y=%d:\n",X,Y);
	return 0;
}
