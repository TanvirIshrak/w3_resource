#include <stdio.h>

int main(){
    int arr[7],a;
    printf("Input the 5 members of the array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[i] <= 0) arr[i]=100;
    }
    printf("The values are:\n");
    for(int i=0 ; i<5 ; i++){
        printf("n[%d]= %d\n",i,arr[i]);
    }

    return 0;
}
