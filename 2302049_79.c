#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    printf("X\tX+2\tX+4\tX+6\n");
    printf("----------------------------------\n");
    for(int i=1; i<=x ; i+=3){
        printf("%d\t%d\t%d\t%d\n",i,i+2,i+4,i+6);
    }
    return 0;
}


