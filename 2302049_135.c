#include <stdio.h>

int main(){
    int a,b,c,d,n,count=0;
    printf("Input a number:");
    scanf("%d",&n);
    if(n>1 && n<40){
        for (a=0 ; a<=9 ; a++){
            for(b=0 ; b<=9 ; b++){
                for(c=0 ; c<=9 ;c++){
                    for(d=0 ; d<=9 ; d++){
                        if(a+b+c+d == n){
                            printf("%d,%d,%d,%d\n",a,b,c,d);
                            count++;
                        }
                    }
                }
            }    
        }
        printf("Total number of combination : %d",count);
        
    }

    return 0;
}

