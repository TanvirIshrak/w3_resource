#include <stdio.h>

int main () {
    int a, b;
    printf("Input two pairs values (integer values):\n");
    scanf("%d %d", &a, &b);
    if  (a != b) 
        if (b > a){
            printf("Ascending order\n");
        }
        else{
            printf("Descending order\n");
        }
    
    return 0;
}

