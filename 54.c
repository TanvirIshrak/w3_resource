#include <stdio.h>

int main(){
    float cm,inch;
    printf("Input data:");
    scanf("%f",&cm);

    inch=cm*0.393;
    printf("Distance of %f cms is = %f inches",cm,inch);

    return 0;
}


