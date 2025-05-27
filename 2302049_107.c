#include <stdio.h>

int main(){
    int num,i,even=0,odd=0;
    printf("Input an integer number:");
    scanf("%d",&num);
    printf("Next 10 consecutive even numbers:\n");
    for(i=num+2 ; ; i++){
        if(i%2==0){
            printf("%d, ",i);
            even++;
            if(even==10) break;
        }
    }
    printf("\n");
    printf("Next 10 consecutive odd numbers:\n");
    for(i=num+2 ; ; i++){
        if(i%2!=0){
            printf("%d, ",i);
            odd++;
            if(odd==10) break;
        }
    }

    return 0;
}


