#include <stdio.h>
#include <stdlib.h>

int main() {
	int A,B,C;
	printf("entrer les deux nombres A et B:\n");
	scanf("%d%d",&A,&B);
	if(A*B>0){
	A=A+B;
	B=A-B;
	A=A-B;
	printf("A=%d et B=%d:\n",A,B);}
	else{
	C=A+B;
	B=A*B;
	A=C;
	printf("A=%d et B=%d:\n",A,B);}
	return 0;
}
