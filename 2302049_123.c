#include <stdio.h>

int main(){
    int m,n,odd=0,sum=0;
    scanf("%d%d",&m,&n);
    for(int i=m ; ; i++){
        if(i%2!=0){ 
            sum+=i;
            odd++;
            if(odd==n) break;
        }
    }
    printf("Sum of %d odd numbers from %d : %d",n,m,sum);

    return 0;
}

