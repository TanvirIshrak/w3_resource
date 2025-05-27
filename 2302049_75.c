#include <stdio.h>

int main(){
    // int a,sep;
    // scanf("%d ",&a);

    // sep=a/1000000;
    // printf("%d ",sep);
    // a=a%1000000;
    
    // sep=a/100000;
    // printf("%d ",sep);
    // a=a%100000;
    
    // sep=a/10000;
    // printf("%d ",sep);
    // a=a%10000;
    
    // sep=a/1000;
    // printf("%d ",sep);
    // a=a%1000;
    
    // sep=a/100;
    // printf("%d ",sep);
    // a=a%100;

    // sep=a/10;
    // printf("%d ",sep);
    // a=a%10;
    // printf("%d",a);
    
    int n;
    scanf("%d",&n);
    while(n>0){
        printf("%d ",n%10);
        n /=10;
    }

    return 0;
}

