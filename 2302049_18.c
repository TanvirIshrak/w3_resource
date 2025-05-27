#include <stdio.h>

int main(){
    int days,year,month,day;
    printf("Input no.of days:");
    scanf("%d",&days);

    year=days/365;
    days=days%365;

    month=days/30;
    days=days%30;

    day=days;
    printf("%d Year(s)\n",year);
    printf("%d Month(s)\n",month);
    printf("%d Day(s)\n",day);

    return 0;
}
