#include <stdio.h>

int main(){
    double interest,principal,rate,days;
    scanf("%lf",&principal);
    while((int)principal!=0){
        scanf("%lf%lf",&rate,&days);
        interest=principal*rate*(days/(double)365);
        printf("The interest amont is &%lf",interest);
    }
    return 0;
}
