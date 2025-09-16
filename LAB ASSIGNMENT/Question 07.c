#include <stdio.h>

int main()
{
	float units,electricityBill;
	
	printf("Enter the amount of units consumed over the last month:");
	scanf("%f",&units);
	
	if (units<=100)
	{
	electricityBill=units*10;
	printf("The electricity bill for the last month is %.2f pkr",electricityBill);
    }
	
	else if(units>=101 && units<=300)
	{
		electricityBill=units*15;
	    printf("The electricity bill for the last month is %.2f pkr",electricityBill);
	}
	
	else if(units>=301 && units<=500)
	{
		electricityBill=units*20;
	    printf("The electricity bill for the last month is %.2f pkr",electricityBill);
	}
	
	else if(units>500)
	{
		electricityBill=units*25;
	    printf("The electricity bill for the last month is %.2f pkr",electricityBill);
	}
	
	return 0;
}
