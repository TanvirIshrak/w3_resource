#include <stdio.h>

int main(){
    int i,number[5],pos=0,neg=0;
    printf("Input the first number:");
    scanf("%d",&number[0]);
    printf("Input the second number:");
    scanf("%d",&number[1]);
    printf("Input the third number:");
    scanf("%d",&number[2]);
    printf("Input the fourth number:");
    scanf("%d",&number[3]);
    printf("Input the fifth number:");
    scanf("%d",&number[4]);

    for(i=0;i<5;i++){
        if(number[i]>0) pos++;
        else if(number[i]<0) neg++;
    }

    printf("Number of positive numbers: %d\n",pos);
    printf("Number of negative numbers: %d\n",neg);

    return 0;
}


