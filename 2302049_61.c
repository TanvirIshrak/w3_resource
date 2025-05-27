#include <stdio.h>
#include<math.h>

int main(){
    float a,trans;
    printf("Input value of x:");
    scanf("%f",&a);

    if(a!=0.0){
        trans=1/a;
        printf("Vlaue of sin(1/%.2f) is : %.2f ",a,sin(trans));
    }

    return 0;
}


