#include <stdio.h>

int main(){
    double i,j=1, sum=0,div;
    for(i=1;i<=7;i+=2){
        div=i/j;
        sum += div;
        j=j*2;
    }
    printf("Value of S:%.2lf",sum);
    return 0;
}



