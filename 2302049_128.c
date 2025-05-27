#include <stdio.h>

int main(){
    int val;
    printf("Input a number(2--10):\n");
    scanf("%d",&val);
    for(int i=0 ;i<10 ; i++){
        printf("arr_num[%d]=%d\n",i,i);
        if(i==val){

                printf("arr_num[%d]=%d\n",i,i);
        }
    }

    return 0;
}
//not working
