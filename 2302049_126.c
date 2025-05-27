#include <stdio.h>

int main(){
    int arr[7],i,neg,neg_posi=0;
    printf("Input 7 array elements:\n");
    for(i=0 ; i<7 ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]<=0){
            neg=arr[i];
            neg_posi=i;
        }
    }
     printf("Array_nums[%d] = %d",neg_posi,neg);

    return 0;
}

