#include<stdio.h>
int main() {
    int p, r, t, interest;

    printf("Input principle, Rate of interest & time to find simple interest: \n");
    scanf("%d%d%d",&p,&r,&t);

    interest = (p * r * t) / 100;
    printf("Simple interest = %d", interest);

    return 0;
}


