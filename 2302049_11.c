#include <stdio.h>

int main(){
    int w1,w2,n1,n2;
    float avg;

    printf("Weight- Item1: ");
    scanf("%d",&w1);
    printf("No. of Item1: ");
    scanf("%d",&n1);

    printf("Weight- Item2: ");
    scanf("%d",&w2);
    printf("No. of Item2: ");
    scanf("%d",&n2);

    avg = (w1*n1+w2*n2)/(n1+n2);

    printf("Average Value = %f",avg);

    return 0;
}
