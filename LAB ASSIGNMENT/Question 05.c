#include <stdio.h>

int main()
{
	int Number;
	
	printf(" Enter any integer:");
	scanf(" %d",&Number);
	
	if(Number%2==0)
	printf("\n The Number (%d) is even",Number);
	
	else
	printf("\n The Number (%d) is odd",Number);
	
	return 0;
}
