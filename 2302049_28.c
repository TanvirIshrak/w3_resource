#include <stdio.h>

int main(){
    float number[5],sum=0,avg;
    int i,pos=0;
    printf("Input the first number:");
    scanf("%f",&number[0]);
    printf("Input the second number:");
    scanf("%f",&number[1]);
    printf("Input the third number:");
    scanf("%f",&number[2]);
    printf("Input the fourth number:");
    scanf("%f",&number[3]);
    printf("Input the fifth number:");
    scanf("%f",&number[4]);

    for(i=0;i<5;i++){
        if(number[i]>0){
            pos++;
            sum +=(number[i]);
            }
    }

    avg=sum/pos;
    printf("Number of positive numbers: %d\n",pos);
    printf("Average value of the said positive numbers:%.2f\n",avg);

    return 0;
}



