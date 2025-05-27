#include<stdio.h>
int main() {
    int a;
    printf("Read the integer from keyboard:");
    scanf("%d",&a);
    // printf("\nInteger value = %d ",a);
    a <<= 2;
    printf("\nThe left shifted data is = %d ",a);

    return 0;
}

