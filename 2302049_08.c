#include <stdio.h>

int main(){

    int days=1329;
    int years=days/365; 
    days = days%365; 
    int weeks= days/7; 
    days=days%7;
    
    printf("Years:%d\n",years);
    printf("Weeks:%d\n",weeks);
    printf("Days:%d\n",days);

    return 0;
}
