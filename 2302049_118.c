#include <stdio.h>

int main(){
    int marks,sum=0;
    float avg;
    for(int i=1 ; i<=5 ; i++){
        scanf("%d",&marks);
        sum+=marks;
    }
    avg=(float)sum/5.0;
    printf("Average marks=%.2f",avg);

    return 0;
}


