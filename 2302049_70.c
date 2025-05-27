#include <stdio.h>

int main(){
    int a;
    for(int i=65 ; i<91 ; i++){
        printf("[%d-%c]",i,i);
    }
    printf("\n");
    for(int i=97 ; i<123 ; i++){
        printf("[%d-%c]",i,i);
    }
    return 0;
}


