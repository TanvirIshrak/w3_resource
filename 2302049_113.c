#include <stdio.h>

int main(){
    int x,y;
    for(x=1,y=100 ; y>=0 ; x+=5,y-=10){
        printf("\t a=%d\t b=%d\n",x,y);
    }
    return 0;
}


