#include <stdio.h>

int main(){
    int num,x,rev=0;
    scanf("%d",&num);// 0876 
    while(num>=1){
    x=num%10;      //6 ,7,8
    rev=rev*10+x; //0*10+6= 6*10+7=67*10+
    num=num/10;  // 87 ,8
    }

    printf("%d",rev);
    return 0;
}

