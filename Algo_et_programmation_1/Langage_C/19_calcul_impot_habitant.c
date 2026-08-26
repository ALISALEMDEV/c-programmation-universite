#include <stdio.h>
#include <stdlib.h>

int main() {
	int Age;
	char sexe;
	printf("si tu es un homme entrer 0 si tu es une femme entrer 1:");
	scanf("%c",&sexe);
	printf("entre votre Age :");
	scanf("%d",&Age);
	
	if((sexe == '0' && Age >= 20) || (sexe == '1' && (Age >= 18 && Age <= 35)))
	printf("vous devez payer TAX");
	else
	printf("vous ne devez pas payer TAX");
	
	return 0;
}
