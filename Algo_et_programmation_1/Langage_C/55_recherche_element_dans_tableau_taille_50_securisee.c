#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, T[50], n;
    
    for(i = 0; i < 50; i++) {
        printf("donner la valeur de T[%d]: ", i);
        scanf("%d", &T[i]);
    }
    
    printf("donner la valeur de n: ");
    scanf("%d", &n);
    
    for(i = 0; i < 50; i++) {
        if(T[i] == n) {
            printf("n se trouve dans le tableau\n");
            break;
        }
    }
    
    if(i == 50) 
        printf("n ne se trouve pas dans le tableau\n");
        
    return 0;
}
