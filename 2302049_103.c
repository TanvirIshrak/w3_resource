#include <stdio.h>

int main(){
    int a,b;
    printf("Take two integers:");
    scanf("%d%d",&a,&b);
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(a%b==0) printf("Multiplies");
    else printf("Not multiplies");

    return 0;
}


