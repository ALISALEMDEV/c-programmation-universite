#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int Nombre_Aleatoire,x,i=1;
    const int MAX=30,MIN=1;
    srand(time(NULL));
    Nombre_Aleatoire=(rand() % (MAX - MIN + 1)) + MIN;
    printf("J'ai choisi un nombre entre 1 et 30.A vous de le deviner en 5 tentatives au maximum\n");


    do{
    printf("quel est le nombre :\n");
    scanf("%d",&x);
    if(x==Nombre_Aleatoire){

        printf("you WIN in %d time",i);
        goto B;
    }

    else {
        if(x>Nombre_Aleatoire)
        printf("c'est moins!\n");
        else
        printf("c'est plus!\n");
    }
    i++;
    }while(i<=5);
    printf("you lose you spend all of your attemps");
    B:printf("\n");
    return 0;
}
