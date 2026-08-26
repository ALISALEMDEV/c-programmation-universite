#include <stdio.h>
#include <stdlib.h>

int main() {
	int Age;
	printf("entrer votre age:\n");
	scanf("%d",&Age);
	if(Age>=12)
	printf("tu es Cadet");
	else if(Age>=11 && Age<=10)
	printf("tu es Minime");
	else if(Age>=8 && Age<=9)
	printf("tu es Pupille");
	else if(Age>=6 && Age<=7)
	printf("tu es Poussin");
	
	return 0;
}
