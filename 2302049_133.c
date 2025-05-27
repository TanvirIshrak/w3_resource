#include <stdio.h>

int main(){
    int val1,val2,sum=0,count=0;
    printf("Input two integers:");
    scanf("%d%d",&val1,&val2);
    sum=val1+val2;
    int temp=sum;
    while (temp!=0){
        temp=temp/10;
        count++; 
    }
    printf("number of digints = %d",count);

    return 0;
}
