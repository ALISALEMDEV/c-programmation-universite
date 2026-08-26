#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float X,Y;
	char operation;
	printf("entrer le type de l'operation:");
	scanf("%c",&operation);
	printf("entrer les valeurs X et y:");
	scanf("%f%f",&X,&Y);	
	switch(operation){
	
	case '+' :printf("la solution est:%.2f",X+Y);
			  break;
	case '-' :printf("la solution est:%.2f",X-Y);
			  break;
	case '*' :printf("la solution est:%.2f",X*Y);
	          break;
	case '/' :
			  printf("la solution est:%.2f",X/Y);
	          break;
	default  :printf("operation incorrect");
	          break;
	}
		return 0;
}
