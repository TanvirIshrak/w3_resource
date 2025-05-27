#include <stdio.h>

int main(){

    int a;
    printf("Input an integer:");
    scanf("%d",&a);
    if(a>0 && a%2==0) printf("Positive Even");
    else if(a>0 && a%2!=0) printf("Positive Odd");
    else if(a<0 && a%2==0) printf("Negative Even");
    else if(a<0 && a%2!=0) printf("Negative Even");
    return 0;
}
