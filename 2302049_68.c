#include <stdio.h>

int main(){
    int i,n;
    long int power;
    double neg_power;
        printf("\nn\t2 to the power\t1/2 to the power");
    for( i=0 ; i<11 ; i++){
        if(i==0)
            power=1;
        else{
            power=2*power;
            neg_power=1.0/(double)power;
        }
        printf("\n%d\t%ld\t%lf",i,power,neg_power);
    }
    return 0;
}


