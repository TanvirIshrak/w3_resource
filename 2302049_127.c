#include <stdio.h>

int main(){
    int arr[8],arr2[8],i,j,temp1,temp2;
    printf("Input 8 array elements:\n");
    for(i=0 , j=7; i<8 , j>=0 ; i++, j--){
        scanf("%d",&arr[i]);
        temp1=arr[i];
        temp2=arr2[j];
        arr[i]=temp2;
        arr2[j]=temp1;
    }
    for(i=0 ; i<8 ;i++){
            printf("array nums[%d]=%d\n",i,arr2[i]);
    }
    return 0;
}


