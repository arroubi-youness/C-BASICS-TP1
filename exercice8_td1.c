#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("-------------1er partie--------------\n");
    for(i=0;i<6;i++){
        for(j=6-i;j>0;j--){
                printf("%d",j);

        }
        printf("\n");
    }

    printf("-------------2eme partie--------------\n");
    for(i=0;i<10;i++){
        for(j=0;j<10-i;j++){
            printf("%d",i);
        }
         printf("\n");
         for(int k=0;k<i+1;k++){
            printf(" ");
         }
    }
    return 0;
}
