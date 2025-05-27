#include <stdio.h>

int main(){
    double weight,height,BMI;
    printf("Height(feet):");
    scanf("%lf",&height);
    printf("weight(kg):");
    scanf("%lf",&weight);
    height=height*0.304;
    BMI=weight/(height*height);
    printf("BMI is %lf",BMI);
    
    return 0;
}
