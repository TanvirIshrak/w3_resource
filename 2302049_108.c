#include <stdio.h>

int main(){
    int val1,val2,odd_sum=0,even_sum=0;
    printf("Input first int:");
    scanf("%d",&val1);
    printf("Input second int(greater than before):");
    scanf("%d",&val2);
    for(int i=val1 ; i<=val2 ; i++){
        if(i%2==0) even_sum+=i;
        else odd_sum+=i;
    }
    printf("Sum of all odd values between %d and %d is %d\n",val1,val2,odd_sum);
    printf("Sum of all even values between %d and %d is %d\n",val1,val2,even_sum);

    return 0;
}

