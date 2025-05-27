#include <stdio.h>

int main(){
    long arr[500];
    int n;
    printf("Input numebr of terms:\n");
    scanf("%d",&n);
    printf("Input the terms:\n");
    for(int i=0 ; i<n ; i++){
        scanf("%ld",&arr[i]);
    }
    long max=arr[0],temp_sum=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            temp_sum+=arr[j];
            if(temp_sum>max) max=temp_sum;
        }
        temp_sum=0;  //to readdin all array values
    }
    printf("Maximu sum of contiguous:%ld",max);

    return 0;
}


