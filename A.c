#include <stdio.h>
#include <stdlib.h>

int main(void){

  int i;
  int n;
  
  printf("saisir un entier positif : ");

    scanf("%d", &i);
        
    for (int n = 1; i <= 10 ; i++){

         if(n > 0){            

            printf(" %d * %d = %d\n", n, i, n * i);    

        } 
        else if (n < 0){
        
            printf("Valeur invalide \n");
        }
        
        
    } 
}