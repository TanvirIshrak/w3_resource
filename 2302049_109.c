#include <stdio.h>

int main(){
    int val,i;
    scanf("%d",&val);
    printf("Square of each even between 1 and %d\n",val);
    for(i=1 ; i<=val ; i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    printf("Square of each odd between 1 and %d\n",val);
    for(i=1 ; i<=val ; i++){
        if(i%2!=0){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}

