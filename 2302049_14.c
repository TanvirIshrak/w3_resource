#include <stdio.h>

int main(){
    float distance,liter;
    printf("Input total distance in km: ");
    scanf("%f",&distance);

    printf("Input fiel spent in liters: ");
    scanf("%f",&liter);

    printf("Average consumption(km/lt): %.2f",distance/liter);
    return 0;
}



