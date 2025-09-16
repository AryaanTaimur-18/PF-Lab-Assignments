#include <stdio.h>

int main()
{
	int int1,int2,int3;
	
	printf("Enter First Integer:");
	scanf(" %d",&int1);
	
	printf("Enter Second Integer:");
	scanf(" %d",&int2);
	
	printf("Enter Third Integer:");
	scanf(" %d",&int3);
	
	if(int1>int2 && int1>int3)
	printf("%d is the greatest integer",int1);
		
    else if (int2>int1 && int2>int3)
	printf("%d is the greatest integer",int2);
	
	else
	printf("%d is the greatest integer",int3);
	return 0;
}
