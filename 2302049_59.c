#include <stdio.h>

int main(){
    double sum=0,a,i,n;
    scanf("%lf",&a);
    for(i=1;i<=a;i++){
        n= 1/i;
        sum=sum+n;
    }
    printf("%.2lf",sum);

    return 0;
}


