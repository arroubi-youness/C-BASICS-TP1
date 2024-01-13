#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   int prix_initil;
   int prix_remise;
   int prix_final;
   printf("entrer le prix initial d'un produit:");
   scanf("%d",&prix_initil);
   if(prix_initil<=100){
      prix_remise=prix_initil*0.3;
      prix_final = prix_initil-prix_remise;
      printf("prix initial=%d\nprix_remise=%d\nprix_final=%d",prix_initil,prix_remise,prix_final);
   }
     else if(prix_initil>100 && prix_initil<=200){
      prix_remise=prix_initil*0.4;
      prix_final = prix_initil-prix_remise;
      printf("prix initial=%d\nprix_remise=%d\nprix_final=%d",prix_initil,prix_remise,prix_final);
   }
   else{
      prix_remise=prix_initil*0.5;
      prix_final = prix_initil-prix_remise;
      printf("prix initial=%d\nprix_remise=%d\nprix_final=%d",prix_initil,prix_remise,prix_final);
   }


    return 0;
}
