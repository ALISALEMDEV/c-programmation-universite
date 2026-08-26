#include <stdio.h>
#include <stdlib.h>


int main() {
	int X,Y;
	printf("entrer X et Y :\n");
	scanf("%d%d",&X,&Y);
	X=X+Y;
	Y=X-Y;
	X=X-Y;
	printf("X est:%d Y est:%d\n",X,Y);
	return 0;
}
