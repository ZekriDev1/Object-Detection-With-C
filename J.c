#include <stdlib.h>
#include <stdio.h>


int main (void){

    int i;
    int number;


    int count = 0;

    printf("enter a positive integer : ");
    scanf("%d", &i);


    if( i < 0){
        printf("can't use negatif int");
        
    } else{
        for (i = 0; i < count; i++)
            {
                number = i / 10; 
                count++;    
        }
        
    }
    printf("The number %ld has %d digits.\n", count);
    return 0;   
}   