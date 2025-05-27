#include <stdio.h>

int main(){
    int num;
    printf("Input the first value:\n");
    scanf("%d",&num);
    printf("Array elements:\n");
    for(int i=0 ; i<7 ;i++){
        printf("array_nums[%d] = %d \n",i,num);
        num=num*2;
    }

    return 0;
}
