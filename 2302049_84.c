#include <stdio.h>

int main(){
    int num,i,sum=0,count=0;
    float avg;
    for(i=0;;i++){
        scanf("%d",&num);
        if(num==888) break;
        sum+=num;
        count++;
    }
    avg=(float)sum/(float)count;
    printf("Average is %.3f",avg);

    return 0;
}
