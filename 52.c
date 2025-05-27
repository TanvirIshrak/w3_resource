#include <stdio.h>

int main(){
    int a,i,arr[5],min,position=0;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]); //arr[0]=10
        if(i==0) min=arr[i];
        else if(arr[i]<min){ //arr[1]=2
            min=arr[i]; //arr[1]
            position=i;
        }
    }
    printf("Smallest value:%d \nPosition of the element:%d",min,position);
    return 0;
}


