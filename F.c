#include <stdio.h>
#include <stdlib.h>


int main(void){

    int n;
    int i;

    printf("Enter a Number : ");
    scanf("%d", &n);


   while (n > 0) 
    {
        printf("%d\n", n);
        n--;
    }
    return 0;
    
    
}