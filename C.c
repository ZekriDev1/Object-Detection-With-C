#include <stdlib.h>
#include <stdio.h>


int sum(int);

int main(void){

    int n; 

    printf("Entrer N : ");

    scanf("%d", &n);
    printf("sum = %d\n",sum(n));
   
    return 0;

}   

int sum(int i){
    int c;
    int value = 0;
    for (c=1; c <= i; c++){
        value = value + c;
    }
        return value;

}
