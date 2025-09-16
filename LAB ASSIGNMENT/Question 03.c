#include <stdio.h>

int main()
{
	float Water_Level;
	
	printf("What is the water level (in ft) in your area?");
	scanf(" %f",&Water_Level);
	
	if(Water_Level<2)
	printf("No Relief Required");
	else if(Water_Level>=2 && Water_Level<=4)
	printf("Small Relief Package");
	else if(Water_Level>=4 && Water_Level<=6)
	printf("Medium Relief Package");
	else if(Water_Level>6)
	printf("Evacuation Required");
	
	return 0;
}
