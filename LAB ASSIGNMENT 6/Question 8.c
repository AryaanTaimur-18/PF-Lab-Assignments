#include <stdio.h>
#include <math.h> // for pow() function

int main()
{
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // count the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num; // reset value to reuse it

    // calculate sum of nth power of each digit
    while (originalNum != 0)
    {
        remainder = originalNum % 10; // get last digit
        result += pow(remainder, n);  // add digit^n
        originalNum /= 10;            // remove last digit
    }

    // check if number is Armstrong
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
