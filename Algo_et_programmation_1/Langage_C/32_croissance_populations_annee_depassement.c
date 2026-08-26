#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n,s,i,a,m;
	
	a=500000;
	m=1000000;
	s=0;
	for(i=1;i>=0;i++){
		a=a+a*0.08;
		m=m+50000;
		
		if(m<a)
		goto test;		
	}
	test:printf("la valeur de s=%d",i-1);
	return 0;
}
