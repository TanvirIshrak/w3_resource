#include <stdio.h>

int main(){

    int amount;
    printf("Input the amount:");
    scanf("%d",&amount);
    int a=amount/100;
    amount=amount%100;
    printf("%d Note(s) of 100.00\n",a);

    int b=amount/50;
    amount=amount%50;
    printf("%d Note(s) of 50.00\n",b);

    int c=amount/20;
    amount=amount%20;
    printf("%d Note(s) of 20.00\n",c);

    int d=amount/10;
    amount=amount%10;
    printf("%d Note(s) of 10.00\n",d);

    int e=amount/5;
    amount=amount%5;
    printf("%d Note(s) of 5.00\n",e);

    int f=amount/2;
    amount=amount%2;
    printf("%d Note(s) of 2.00\n",f);

    int g=amount/1;
    amount=amount%1;
    printf("%d Note(s) of 1.00\n",g);


    return 0;
}
