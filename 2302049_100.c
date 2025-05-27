#include <stdio.h>

int main(){
    double money;
    printf("Enter currency value:");
    scanf("%lf",&money);
    //converting total value to cents
    int value=(int)(money*100+0.5);

    printf("Currency note:");
    int a=value/10000;
    value=(int)value%10000;
    printf("100 number of notes: %d\n",a);
    int b=value/5000;
    value=(int)value%5000;
    printf("50 number of notes: %d\n",b);
    int c=value/500;
    value=(int)value%500;
    printf("5 number of notes: %d\n",c);  
    int f=value/200;
    value=(int)value%200;
    printf("2 number of notes: %d\n",f);

    printf("Currency note:");
    int d=value/50;
    value=(int)value%50;
    printf("0.5 number of notes: %d\n",d);
    int e=value/(int)25;
    value=(int)value%25;
    printf("0.25 number of notes: %d\n",e);
  

    return 0;
}


