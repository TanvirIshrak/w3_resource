#include <stdio.h>

int main(){
    double num,avg_pos,avg_neg,pos_sum=0,neg_sum=0;
    int pos=0,neg=0,i;
    printf("Input 7 numbers:");
    for(i=0 ; i<7 ; i++){
        scanf("%lf\n",&num);
        if(num<0){
            neg++;
            neg_sum+=num;
        }
        else{
            pos_sum+=num;
            pos++;
        }
    }
    avg_pos=pos_sum/pos;
    avg_neg=neg_sum/neg;
    printf("%d number of positive numbers:Average %lf\n",pos,avg_pos);
    printf("%d number of negative numbers:Average %lf\n",neg,avg_neg);
    return 0;
}
