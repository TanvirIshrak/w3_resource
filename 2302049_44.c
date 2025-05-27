#include <stdio.h>

int main(){
    int marks,count=0,sum=0;
    printf("Input mathematics marks(0 to termainte):");
    // while(1){
    //     scanf("%d",&marks);
    //     if(marks <= 0) break;
    //     count++;
    //     sum+=marks;
    // }
    for(int i=1; ;i++){
        scanf("%d",&marks);
        if(marks<=0) break;
        count++;
        sum+=marks;
    }
    float avg=(float)sum/(float)count;
    printf("Average is %.2f",avg);

    return 0;
}

