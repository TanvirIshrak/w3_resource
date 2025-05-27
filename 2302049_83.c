#include <stdio.h>

int main(){
    double num,i,count=0;
    int rem;
    scanf("%lf",&num);
    while (num>0){
       rem=(int)num%10;
       num=num/10;

       if(rem==3) count++;
    }
    printf("there are total %lf ",count);

    return 0;
}
