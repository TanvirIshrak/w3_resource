#include <stdio.h>
int main() {
    int a, i, j = 1;

    printf("Input number of lines: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        for (int k = 0; k < 3; k++) {
            printf("%d ", j++);
        }
        printf("\n");
    }

    return 0;
}
