#include <stdio.h>

int main(){
    int val1,val2,sum=0;
    printf("Input two numbers:");
    scanf("%d%d",&val1,&val2);
    if(val1>val2){
        int temp=val1;
        val1=val2;
        val2=temp;
    }
    for(int i=val1 ; i<=val2 ;i++){
        if(i%7==0) continue;
        else sum+=i;  
    }
    printf("Sum of all digits:%d",sum);
    return 0;
}


