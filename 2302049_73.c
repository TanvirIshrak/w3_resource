#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    if(m<n){
        int temp=m;
        m=n;
        n=temp;
    }
    if(m%n==0){
        printf("%d is a multiple of %d",m,n);
    }
    else printf("Not multiple");

    return 0;
}


