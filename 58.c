#include <stdio.h>

int main(){
    double a,b,c,d,max,min;
    printf("Input four numbers:");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    //finding max
    if(a>b && a>c && a>d) max=a;
    else if(b>a && b>c && b>d) max=b;
    else if(c>b && c>a && c>d) max=c;
    else max=d;

    //finding min
    if(a<b && a<c && a<d) min=a;
    else if(b<a && b<c && b<d) min=b;
    else if(c<b && c<a && c<d) min=c;
    else min=d;
    printf("Distance is %.2lf",max-min);
    return 0;
}


