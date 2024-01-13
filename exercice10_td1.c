#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int nb;
    printf("enter le nomres de lignes:");
    scanf("%d",&nb);
    for(i=0;i<nb-1;i++){
    for(j=0;j<nb+(nb-1);j++){
            if(j==nb-i || j==nb+i){
                printf("*");
            }
            else{
                printf(" ");
            }

    }
    printf("\n");
    }
    printf(" ");
    //printf(" ");
    for(i=0;i<nb+(nb-1);i++){
        printf("*");
    }
    return 0;
}
