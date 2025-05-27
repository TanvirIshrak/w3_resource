#include <stdio.h>

int main(){
    int m,n,even=0,sum=0;
    scanf("%d%d",&m,&n);
    for(int i=m ; ; i++){
        if(i%2==0){ 
            sum+=i;
            even++;
            if(even==n) break;
        }
    }
    printf("Sum of %d even numbers from %d : %d",n,m,sum);

    return 0;
}
