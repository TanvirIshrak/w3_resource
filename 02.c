
#include<stdio.h> 
int main(){
double w1, w2, num1, num2, avg;
 printf("weight-item1="); 
 scanf("%lf",&w1);
printf("Number of item1=");
 scanf("%lf",&num1);
printf("weight-item2=");
scanf("%lf",&w2);
printf("Number of item2=");
scanf("%lf",&num2);
avg=(w1*num1+w2*num2)/(num1+num2);
 printf("Average value=%lf", avg);
return 0;
}



