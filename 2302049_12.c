#include <stdio.h>

int main(){
    int ID,hours,amount;
    printf("Input the employees ID(Max.10 chars):");
    scanf("%d",&ID);
    printf("Input the working hour:");
    scanf("%d",&hours);
    printf("Salary amount/hr:");
    scanf("%d",&amount);

    printf("Employees ID = %d\n",ID);
    printf("Salary = U$ %d\n",hours*amount);

    return 0;
}
