#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, T[10], Somme=0;
	float Moyenne;
    
    for(i = 0; i < 10; i++) {
        printf("donner la note de l'étudiant %d: ", i+1);
        scanf("%d", &T[i]);
        Somme+=T[i];
        
    }
    Moyenne=(float)Somme/10;
    printf("\nLa moyenne est: %.2f\n", Moyenne);
    
    printf("Les notes superieures a la moyenne sont: ");
    
    for(i = 0; i < 10; i++) {
        if(T[i] > Moyenne) {
            printf("%d ",T[i]);
            
        }
    }

        
    return 0;
}
