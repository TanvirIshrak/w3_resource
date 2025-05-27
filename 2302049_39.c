#include <stdio.h>
int main() {
    int num1, num2, p, i, sum=0;

    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        p = num1;
        num1 = num2;
        num2 = p;
    }

    for(i = num1; i <= num2; i++) {
        if((i % 17) != 0) {
            sum += i;
        }
    }
    printf("Sum: %d\n", sum);

    return 0;
}
