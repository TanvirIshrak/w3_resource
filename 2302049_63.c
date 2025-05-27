#include <stdio.h>

int main(){
    int a,i,j=1,four=0;
    printf("Input a positive number less than 100 : ");
    scanf("%d",&a);
    if(a<1 && a>100){
        printf("Wrong input");
    }
    else{
        for(i=1 ; j<=a ; i++){
            four=four+j*j*j*j;
            j+=i;
        }
        printf("Sum of series is %d",four);
    }

    return 0;
}


