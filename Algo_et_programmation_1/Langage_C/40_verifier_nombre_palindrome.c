#include <stdio.h>
#include <stdlib.h>


int main() {
    int n,inverse=0,temp;
    printf("entrer un entier n:\n");
    scanf("%d",&n);
    temp=n;
    do{
        inverse=(inverse*10)+(temp%10);
        temp=temp/10;

    }while(temp!=0);
    if(inverse==n)
    printf("est palindrome");
    else
    printf("n'est pas palindrome");
    return 0;
}
