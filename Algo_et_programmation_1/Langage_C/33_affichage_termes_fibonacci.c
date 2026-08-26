#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,s,i,S0,S1;
	do{
	printf("entrer la valeur de n:");
	scanf("%d",&n);
}while(n<0);
	S0=0;
	S1=1;
	s=0;
	for(i=2;i<=n;i++){
		
		s=S1+S0;
		S0=S1;
		S1=s;
	printf("%d\n",s);	
	}
	
	return 0;
}
