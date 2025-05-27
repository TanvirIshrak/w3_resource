#include <stdio.h>
#include<math.h>

int main(){
    double a,b,c,Diterminent,value,x,y;
    printf("Input the first number(a):");
    scanf("%lf",&a);
    printf("Input the second number(b):");
    scanf("%lf",&b);
    printf("Input the third number(c):");
    scanf("%lf",&c);

    Diterminent=b*b-4*a*c;
    if(Diterminent>0 && a!=0){
        value=sqrt(Diterminent);
        x=(-b+value)/(2*a);
        y=(-b-value)/(2*a);
        printf("Root1 = %.4lf\n",x);
        printf("Root2 = %.4lf\n",y);

    }


    return 0;
}


