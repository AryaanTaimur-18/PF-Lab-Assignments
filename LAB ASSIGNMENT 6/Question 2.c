#include <stdio.h>

int takenum();

int takenum() {
    int five_dnum;

    while (1) { 
        printf("Enter a five digit number: ");
        scanf("%d", &five_dnum);

        if (five_dnum >= 10000 && five_dnum <= 99999) {
            return five_dnum;
        } else {
            printf("Invalid input! Please enter a five digit number.\n");
        }
    }
}

int main() {
	int number = takenum();
	int digit, sum = 0;
	int temp=number;
	int i;
	
    for (i = 0; i < 5; i++)
        {
            digit = temp%10;
            sum += digit;
            temp /= 10;
        }
        printf("\nSum of digits (%d) is: %d",number, sum);
        
    if(sum%2==0){
    	for(int i=2; i<sum ; i++)
	{
		int num_1=sum%i;
		if(num_1==0)
		{
	    printf("\nThe number is not prime");
	    break;
	    }
	
		else
		{
		printf("\nThe number is prime");
		break;
		}
	}
	}
	else{
		printf("\nsince %d is an odd number, we will check for palindrome", sum);
            int before = number, reversed = 0, remainder;

        while (number != 0) {
            remainder = number % 10;
            reversed = remainder + reversed * 10;
            number /= 10;
        }

        if (before == reversed) {
            printf("\n%d is a palindrome number", before);
        } else {
            printf("\n%d is not a palindrome number", before);
        }
        }

    return 0;
}
