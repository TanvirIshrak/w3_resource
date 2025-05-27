#include <stdio.h>
#define MAX 5

int main(){
    int arr[5],i;
    printf("Input the 5 members of the array:");
    for(i=0; i < 5 ;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<5 ; i++){
        if(arr[i]<MAX){
            printf("A[%d] = %d\n",i,arr[i]);
        }
    }

    return 0;
}

