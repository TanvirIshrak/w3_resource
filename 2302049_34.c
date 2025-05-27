#include <stdio.h>
int main() {
    int x, y, sum = 0; 
    printf("Input a pair of numbers (for example 10,2)\n");
    printf("Input first number of the pair:\n");
    scanf("%d", &x);
    printf("Input second number of the pair:\n");
    scanf("%d", &y); 

    if (x < y) {
        return 0; 
    }

    printf("\nList of odd numbers:\n");
    for (int i = y; i <= x; i++) {        
        if ((i % 2) != 0) {
            printf("%d\n", i); 
            sum += i;
        }
    }
    
    printf("Sum=%d\n", sum);

    return 0;
}
