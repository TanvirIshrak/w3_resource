#include <stdio.h>
#include<math.h>

int main(){
    int n,prime,count=0;
    printf("Input a number:");
    scanf("%d",&n);
    for(int i=2 ; i<=n ; i++){
        if(n%i==0) prime=1;
        else{
            prime=0;
            count++;
            }
        }
    printf("total %d are there",count);

    return 0;
}
//not working