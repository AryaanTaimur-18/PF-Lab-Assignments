#include <stdio.h>

int main()
{
	float Rainfall,River_Flow;
	
	printf(" Enter the rainfall (in mm):");
	scanf("%f",&Rainfall);
	
	printf("Enter the speed of river flow (in m^3/s):");
	scanf("%f",&River_Flow);
	
	if(Rainfall<50 && River_Flow<200)
	printf("\n Low Risk");
	
	else if(Rainfall>=50 && Rainfall<=100 && River_Flow>=200 && River_Flow<=500)
	printf("\n Moderate Risk");
		
	else if(Rainfall>=100 && Rainfall<=150 && River_Flow>=500 && River_Flow<=800)
	printf("\n High Risk");
	
	else if(Rainfall>150 && River_Flow>800)
	printf("\n Severe Risk - Evacuate!");
	
	return 0;
}
