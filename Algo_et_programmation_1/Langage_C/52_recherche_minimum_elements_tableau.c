#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,T[10],temp;
	
	for(i=0;i<10;i++){
		printf("donner la valeur de T[%d]:",i);
		scanf("%d",&T[i]);
		if(i==0)
		temp=T[i];
		if(temp>T[i])
		temp=T[i];
	}
	printf("le minimum est : %d",temp);
	return 0;
}
