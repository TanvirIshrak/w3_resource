#include <stdio.h>

int main(){
    int a,max,max_pos=1;
    for( int i=0;i<5;i++){
        scanf("%d",&a);
        if(i==0) max=a;
        else if(a>max){
            max=a;
            max_pos=i+1;
        }
    }
    printf("Max:%d /n Position:%d",max,max_pos);

    return 0;
}

