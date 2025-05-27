#include <stdio.h>

int main(){
    int number[5],x,multi,i;
    printf("Input the first number of the array:");
    scanf("%d",&x);
    for(i=0;i<5;i++){
        number[i]=x;
        printf("n[%d] = %d\n",i,number[i]);
        x=x*3;
        
    }
    // for(i=0; i < 5 ; i++){
    //     printf("n[%d] = %d\n",i,number[i]);
    // }

    return 0;
}
