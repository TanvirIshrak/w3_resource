#include <stdio.h>

int main(){
    int i,a;
    float sum=0.0;
    printf("Write your target:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=1.0/(float)i;
    }
    printf("value of S:%.2f",sum);
    return 0;
}
