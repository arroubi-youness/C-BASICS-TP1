#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int nb;

    int testeur=0;
    printf("entrer un nombre:");
    scanf("%d",&nb);
    for(int i=2; i<=(nb/2);i++)
    if (nb%i==0){
        testeur=1;
    }
     if (testeur==1){
        printf("le nombre est pas premier ");
     }
     else{
        printf("le nombre est premier ");
     }
    return 0;
}
