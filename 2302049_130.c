#include <stdio.h>

int main(){
    int arr[100],n,min,position;
    printf("Input the array size:");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        if(i==0) min=arr[i];
        else if(arr[i]<min) {
            min=arr[i];
            position=i;
        }
    }
    printf("smallest=%d\nPosition=%d\n",min,position);

    return 0;
}

