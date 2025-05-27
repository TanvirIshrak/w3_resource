#include <stdio.h>

int main(){
    int a,i,x,sum=0;
   
    printf("Input a positive value less than 500:");
    scanf("%d",&a);
    int tmp =a;
    if(a>1 && a<500){
        for(i=1;i<4;i++){
            x=a%10;
            sum+=x;
            a=a/10;}  
        }
    printf("Sum of the degits of %d is %d",tmp,sum);
    return 0;
}
