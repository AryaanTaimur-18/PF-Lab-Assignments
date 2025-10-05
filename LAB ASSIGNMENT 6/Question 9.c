#include <stdio.h>

int main()
{
    int num, temp, digit, count = 0;
    int digits[20];

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    do
    {
        digits[count] = temp % 10; 
        temp = temp / 10;     
        count++;
    } while (temp != 0);

    printf("\nNumber of digits: %d\n", count);

    for (int i = count - 1, j = 1; i >= 0; i--, j++)
    {
        printf("Digit %d: %d\n", j, digits[i]);
    }

    return 0;
}
