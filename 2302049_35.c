#include <stdio.h>

int main(){
    int a,b;
    printf("Input a pair of numbers(for example 10,2:2,10)\n");
    printf("Input a pair of numbers:\n");
    scanf("%d",&a);
    printf("Input a pair of numbers:\n");
    scanf("%d",&b);

    if(a>b) printf("The pair is in descending order!");
    else printf("The pair is in ascending order!");

    return 0;
}
