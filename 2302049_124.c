#include <stdio.h>

int main(){
    int arr[7],i;
    for(i=0 ; i<7 ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0) arr[i]=1;
    }
    printf("Array elements:\n");
    for(i=0 ; i<7 ;i++){
        printf("array_num[%d] = %d\n",i,arr[i]);
    }
    return 0;
}


