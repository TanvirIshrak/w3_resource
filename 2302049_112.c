#include <stdio.h>

int main(){
    int val,max,position=0;
    for(int i=1 ; i<=7 ; i++){
        scanf("%d",&val);
        if(i==1)max=val;
        else if(val>max){
            max=val;
            position=i;
        }
    }
    printf("max is :%d\n position:%d\n",max,position);
    return 0;
}
