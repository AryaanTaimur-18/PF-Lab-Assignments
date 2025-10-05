#include <stdio.h>

int main() {
    int rows;
    int i,j,k,l;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = i; j <rows; j++) {
            printf(" ");
        }

        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }

        for (l = i-1; l >= 1; l--) {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}
