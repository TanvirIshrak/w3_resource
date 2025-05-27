#include <stdio.h>

int main(){
    int val1,val2;
    printf("Input pair of values:");
    scanf("%d%d",&val1,&val2);
    if(val1>val2){
        int temp=val1;
        val1=val2;
        val2=temp;
    }
    printf("Sequesnce from lowest to highest:");
    for(int i=val1 ; i<=val2 ; i++){
        printf("%d ",i);
    }
    float avg=(float)(val1+val2)/2.0;
    printf("\nAverage is %.2f",avg);
    return 0;
}

