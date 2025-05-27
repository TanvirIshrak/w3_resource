#include <stdio.h>

int main(){

    int a,b,c,perimeter;
    printf("Input the first number:");
    scanf("%d",&a);
    printf("Input the second number:");
    scanf("%d",&b);
    printf("Input the third number:");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        perimeter=a+b+c;
        printf("Perimeter = %d",perimeter);
    }
    else {
        printf("Not possible to creat a triangle..!");
    }
    return 0;
}
