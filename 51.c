#include <stdio.h>

int main(){
    int i,in[5];
    printf("Input the 5 members of the array:\n");
    for(i=4; i>=0; i--){
        scanf("%d",&in[i]);
        // in[i]=a;
    }

    for(i=0;i<5;i++){
        printf("array_n[%d] = %d\n",i,in[i]);
    }


    return 0;
}

