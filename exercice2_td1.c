#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int age;
    char *sexe;
    sexe = (char*)malloc(10*sizeof(char));
    printf("Enter the age: ");
    scanf("%d", &age);


    while (getchar() != '\n');
    /*do{
    printf("Enter the gender: ");
    scanf("%s",sexe);
    }while((strcmp(sexe,"femme")!=0) && (strcmp(sexe,"homme")!=0));

  */
    printf("Enter the gender homme/femme: ");
    scanf("%s",sexe);
    while((strcmp(sexe,"homme")!=0) && (strcmp(sexe,"femme")!=0) ){
        printf("Enter the gender homme/femme: ");
        scanf("%s",sexe);
    }
    if (age >= 20 && strcmp(sexe, "homme") == 0){
        printf("il est imposable\n");
    }
    else if((age>=18 && age<=35)|| strcmp(sexe,"femme")==0){
        printf("elle est imposable\n");
    }
    else{
        printf("ils ne sont pas imposable\n");
    }
    free(sexe);
    return 0;
}
