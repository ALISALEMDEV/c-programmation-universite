#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, T[10], n;
    
    for(i = 0; i < 10; i++) {
        printf("donner la valeur de T[%d]: ", i);
        scanf("%d", &T[i]);
    }
    
    printf("donner la valeur de n: ");
    scanf("%d", &n);
    
    for(i = 0; i < 10; i++) {
        if(T[i] == n) {
            printf("n se trouve dans le tableau\n");
            break;
        }
    }
    
    if(i == 10) 
        printf("n ne se trouve pas dans le tableau\n");
        
    return 0;
}
