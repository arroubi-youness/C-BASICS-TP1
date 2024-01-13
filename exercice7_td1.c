#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a;
    int i=0;
    int nb,e,p;
    e=0;p=0;
    while(i!=20){
        printf("entre un nombre:");
        scanf("%d",&a);
        if (a%2==0){
        printf("ce nombre %d est pair est son carre= %d\n",a,a*a);}
        else{
            printf("ce nombre est impair!\n");
        }
        i++;
    }
    //2eme partie de l'exrcice
    printf("--- --------------------------2eme Partie--------------------------- \n");
    do{
        printf("entrer un nouveau nombre:\n");
        scanf("%d",&nb);
        if(nb==100){
            break;
        }
        if(nb%2==0){
            printf("le nombre %d est  paire et so carre est egale=%d\n",nb,nb*nb);
            p++;
        }
        else{
            printf("le nombre est impaire\n");
            e++;
        }

    }while(nb!=100);
    printf("le nombres total des entrees est %d\n",e+p);
    printf("le nombres total des entrees paires est %d\n",p);
    return 0;
}
