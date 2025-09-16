#include <stdio.h>

int main()
{
	float Num_1,Num_2,result;
	char function;
	
	printf(" Enter First Number:");
	scanf("%f", &Num_1);
	
	printf(" Enter Second Number:");
	scanf("%f", &Num_2);
	
	printf(" Enter an operator (+,-,*,/):");
	scanf(" %c", &function);
	
	switch(function)
	{
		case '+':
			result=Num_1+Num_2;
			printf("\n Result:%.2f",result);
			break;
		case '-':
			result=Num_1-Num_2;
			printf("\n Result:%.2f",result);
			break;
		case '*':
			result=Num_1*Num_2;
		    printf("\n Result:%.2f",result);
		    break;
		case '/':
		    result=Num_1/Num_2;
		    printf("\n Result:%.2f",result);
		    break;
		default:
		    printf("\n The entered operator is invalid");    
	}
	
	return 0;
}
