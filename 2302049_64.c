#include <stdio.h>

int main(){
    int arr[100],i,max,min,count=0,sum=0;
    float avg=0;
    for(i=0;;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0 || arr[i]<0) break;
        if(i==0){
            max=arr[i];
            min=arr[i];
        }
        else {
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }
        count++;
        sum=sum+arr[i];
    }
    avg=(float)sum/(float)count;
    printf("Total positive numbers %d\n",count);
    printf(" Maximun value is %d \n",max);
    printf(" minumum value is %d \n ",min);
    printf("average is %f\n",avg);
    return 0;
}
