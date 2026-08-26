#include <stdio.h>
#include <stdlib.h>


int main() {
	char C;
	printf("press a key to move caractere:");
	scanf("%c",&C);
	
	switch(C){
	
	case 'W' :printf("Forward");
			  break;
	case 'A' :printf("Left");
			  break;
	case 'D' :printf("Right");
	          break;
	case 'S' :printf("Back");
	          break;
	default  :printf("invaled");
	          break;
	}
	return 0;
}
