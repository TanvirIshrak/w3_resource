#include <stdio.h>

int main(){
    int n,numbers[10];
    printf("Input number of histogram bar:");
    scanf("%d",&n);
    for(int i=1 ; i<=n; i++){
        scanf("%d",&numbers[i]); 
    }
    
    for(int i=1 ; i<=n; i++){
        for(int j=1 ; j<=numbers[i] ; j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}


