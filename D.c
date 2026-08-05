#include <stdio.h>

int main() {

    int nums;
    int count = 0;

    printf("Even numbers count: ");
    scanf("%d", &nums);

    for (int i = 0; i < nums; i++) {
        if (i % 2 == 0) { 
            count++;
        }
    }
    printf("Even numbers count: %d\n", count);
    return 0;
}
