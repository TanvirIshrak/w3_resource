#include <stdio.h>
int main() {
    int a, i; 
    printf("Input an integer:");
    scanf("%d",&a);

    printf("List of square of each one of the even values from 1 to a %d:\n", a);

    for(i = 2; i <= a; i++) { 
        if((i%2) == 0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }

    return 0;
}
