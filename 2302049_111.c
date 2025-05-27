#include <stdio.h>

int main(){
    int number;
    printf("Input a number:");
    scanf("%d",&number);
    for(int i=1 ; i<=100 ; i++){
        if(i%number==3) printf("%d ",i);
    }

    return 0;
}
