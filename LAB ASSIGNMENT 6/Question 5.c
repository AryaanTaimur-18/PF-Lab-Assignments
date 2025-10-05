#include <stdio.h>

int main() {
    int n, i, j;
    int a = 0, b = 1, next;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nFibonacci Triangle:\n");

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for columns
        for (j = 1; j <= i; j++) {
            printf("%d ", b); 
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n");
    }

    return 0;
}
