#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   int nb =0;
   int test;
    printf("---------------------HELLO USER----------------------\n");
   printf("enter un nombre:");
    scanf("%d",&nb);
    printf("le nombre est: %d\n",nb);
    printf("-------------------------------------------\n");
   do{


    printf("1-Ajouter 2\n");
    printf("2-multiplie par 3\n");
    printf("3-soustraire 5\n");
    printf("4=Quitter\n");
    printf("-------------------------------------------\n");
    printf("choose an option between 1 and 4:");
    scanf("%d",&test);
    switch(test){
       case 1:printf("la nouvel valeur apres l'ajout est:%d\n",nb=nb+2);
       printf("-----------------------------------------\n");
       break;
       case 2:printf("la nouvel valeur apres la multiplication est:%d\n",nb=nb*3);
        printf("-----------------------------------------\n");
       break;
       case 3:printf("la nouvel valeur apres la soustraction est:%d\n",nb=nb-5);
        printf("-----------------------------------------\n");
       break;
       case 4:exit(0);
        printf("-----------------------------------------\n");
       break;
       }




   }while(test>=1 || test<=4);

    return 0;
}
