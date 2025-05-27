#include <stdio.h>
int main() {
    int pass;
    printf("\nInput the password (numeric characters only): ");
    scanf("%d",&pass);
        if (pass == 1234) {
            printf("Correct password");
            } 
        else {
            printf("Wrong password, try another");
            }
    return 0;
}
