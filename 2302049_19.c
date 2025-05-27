#include <stdio.h>

int main(){

    int p,q,r,s;
    printf("Input the first integer:");
    scanf("%d",&p);
    printf("Input the second integer:");
    scanf("%d",&q);
    printf("Input the third integer:");
    scanf("%d",&r);
    printf("Input the forth integer:");
    scanf("%d",&s);

    if((q,r,s)>0 && (p%2==0) && q>r && s>p && ((r+s)>(p+q))){
        printf("Correct value");
    }
    else {
        printf("Wrong value");
    }
    return 0;
}


