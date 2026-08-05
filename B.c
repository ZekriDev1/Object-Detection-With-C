#include <stdio.h>

int main(void)
{
    int n;

    printf("Saisir un entier positif : ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    else
    {
        printf("Valeur invalide.\n");
    }

    return 0;
}