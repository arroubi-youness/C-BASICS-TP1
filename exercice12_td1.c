#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int taille;
    printf("la taille:");
    scanf("%d",&taille);
    for(i=0;i<taille;i++){
        for(j=0;j<taille;j++){
        if(i==0){
            printf("*");
        }
        else if (i==taille/2){
            printf("-");
        }
        else if (j==0){
            printf("*");
        }
        else if (j==taille-1){
            printf("*");
        }


        else if(j==1+i || j==taille-1-i){
            printf("+");
        }
        else if(j==(taille/2)){
            printf("-");
        }else if(i==taille-1){
            printf("*");
        }

        else{
            printf(" ");
        }
    }

    printf("\n");
    }

    return 0;
}
