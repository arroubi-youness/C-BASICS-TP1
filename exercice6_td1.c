#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   int nombre;
   int i;
   printf("enter number:");
   scanf("%d",&nombre);
   if(nombre%2==0){
    for(i=nombre;i>0;i--){
       if (i%2==0){
    printf("%d\t",i);}}
   }
   else{
    printf("le nombre est impair!");
   }
    return 0;
}
