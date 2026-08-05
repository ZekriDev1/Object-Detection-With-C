#include <stdio.h>
#include <stdlib.h>


int main(void){

    int n;
    int i;

    printf("Enter a Number : ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
    
    
}