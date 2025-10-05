#include <stdio.h>

int main()
{
	int Num,Fact=1;
	
	printf("\t-----Factorial Calculator-----\t");
	printf("\nEnter a number to find a factorial of: ");
	scanf("%d", &Num);
	
	if(Num==0)
	{
		printf("The factorial is 1");
	}
	
	else if(Num<0)
	{
	printf("The number is negative");
    }
    else
    {
	for(int i=1;i<=Num;i++)
	{
		Fact=Fact*i;
	}
	printf("The factorial of the number(%d) is %d", Num,Fact);
    }
	
	
	return 0;
}
