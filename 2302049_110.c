#include <stdio.h>

int main(){
    int value;
    printf("Input a number:");
    scanf("%d",&value);
    if(value>0 && value%2==0) printf("Positive even");
    else if(value>0 && value%2!=0) printf("Positive odd");
    else if(value<0 && value%2==0) printf("Negative even");
    else if(value<0 && value%2!=0) printf("Negative odd");

    return 0;
}


