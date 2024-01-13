#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    char operation;
    float result;
    printf("enter nombre a=");
    scanf("%f",&a);
    printf("enter nombre b=");
    scanf("%f",&b);
    printf("enter operation=");
    scanf(" %c", &operation);
    switch(operation){
       case '+' :printf("la somme est a+b=%.2f",a+b);
       break;
       case '-' : printf("la soustraction est a-b=%.2f",a-b);
       break;
       case '*' : printf("la multiplication est a*b=%.2f",a*b);
       break;
       case '/': if(b!=0){
           printf("la division  est a/b=%.2f",a/b);
           break;
       }
       else{
        printf("impossible d'effectuer la division car le deminateur est null/n");
        break;
       }
       default:
        printf("operation introuvable!");
    }

    return 0;
}