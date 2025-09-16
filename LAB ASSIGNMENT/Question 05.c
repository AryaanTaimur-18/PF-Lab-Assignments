#include <stdio.h>

int main()
{
	int Marks;
	
	printf("Enter student\'s marks:");
	scanf(" %d",&Marks);
	
	if(Marks>=85 && Marks<=100)
	printf("Grade A");
	else if(Marks>=74 && Marks<=84)
	printf("Grade B");
	else if(Marks>=55 && Marks<=69)
	printf("Grade C");
	else if(Marks>=40 && Marks<=54)
	printf("Grade D");
	else 
	printf("Grade F");
	
	return 0;
}
