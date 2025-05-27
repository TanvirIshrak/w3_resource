#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("Number\tsquare\tcube\n");
    printf("==============================\n");

    for(int i=0 ; i<=n ; i++){
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }


    return 0;
}
