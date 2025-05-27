#include <stdio.h>
#define Pie 3.1416

int main(){
    int r=6;
    float primeter = 2*Pie*r;
    float area = Pie*r*r;

    printf("Perimeter of the CIrcle = %f inches\n",primeter);
    printf("Area of the Circle = %f square inches",area);

    return 0;
}

