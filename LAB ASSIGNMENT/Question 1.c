# include <stdio.h>

int main()
{
	int Num;
	
	printf(" Enter a Number:");
	scanf("%d",&Num);
	
	if(Num>0)
	printf("\n The Number %d is Positive",Num);
	else if(Num<0)
	printf("\n The Number (%d) is Negative",Num);
	else
	printf("\n The Number is Zero");
	return 0;
	
}
