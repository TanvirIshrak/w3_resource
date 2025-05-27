#include <stdio.h>

int main(){
    int val1,val2,even_sum=0;
    printf("Input first int:");
    scanf("%d",&val1);
    printf("Input second int(greater than before):");
    scanf("%d",&val2);
    if(val1>val2){
        int temp=val1;
        val1=val2;
        val2=temp;
    }
    for(int i=val1 ; i<=val2 ; i++){
        if(i%2==0) even_sum+=i;
    }
    printf("Sum of all even values between %d and %d is %d\n",val1,val2,even_sum);

    return 0;
}

