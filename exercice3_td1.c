#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int nb_copie;
    float a,b,c;
    float facture;
    a=0;b=0;c=0;
    printf("enter the number of copie:");
    scanf("%d",&nb_copie);
    if (nb_copie<=10){
        a = nb_copie;
        printf("la facture=%.2f",a);
    }
    else if(nb_copie<=30){
        b=10+(nb_copie-10)*0.6;
        printf("la facture=%.2f",b);
    }
    else{
        c=10+(20)*0.6+(nb_copie-30)*0.4;
        printf("la facture=%.2f",c);
    }


    return 0;
}
