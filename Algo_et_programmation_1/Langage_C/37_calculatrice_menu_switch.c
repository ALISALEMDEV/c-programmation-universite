#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x,y,z,o,r;

	A:printf("-----Calculatrice:MENU-----\n");
	printf("1- Addition\n");
	printf("2- Soustraction\n");
	printf("3- Multiplication\n");
	printf("4- Division\n");
	printf("5- reste d'une division entiere\n");
	printf("6- Puissance\n");
	printf("Quel calcul veux-tu effectuer:\n");
	scanf("%d",&o);
	printf("entrer x :\n");
	scanf("%d",&x);
	printf("entrer y :\n");
	scanf("%d",&y);
	
	switch(o){
		
		case 1:printf("la somme de %d et %d est:%d\n",x,y,x+y);
				break;
		case 2:printf("la deffirence de %d et %d est:%d\n",x,y,x-y);
				break;
		case 3:printf("le produit de %d et %d est:%d\n",x,y,x*y);
				break;
		case 4:printf("la division de %d et %d est:%d\n",x,y,x/y);
				break;
		case 5:printf("le reste de %d et %d est:%d\n",x,y,x%y);
				break;
		case 6:z=pow(x,y);
				printf("le puissance de %d et %d est:%d\n",x,y,z);
				break;
		default:printf("operation invalid try again\n");
				break;
		}
	printf("Veux-tu faire un autre calcul(1/0):\n");
	scanf("%d",&r);
	if(r==1)
	goto A;
	return 0;
}
