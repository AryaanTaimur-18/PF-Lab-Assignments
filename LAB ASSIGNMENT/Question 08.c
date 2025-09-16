#include <stdio.h>
#include <math.h>

int main()
{
	double Num_1,Num_2,result;
	char function;
	
	printf(" Enter First Number:");
	scanf("%lf", &Num_1);
	
	printf(" Enter Second Number:");
	scanf("%lf", &Num_2);
	
	printf(" Enter an operator (+,-,*,/,%,^):");
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
			if(Num_2!=0)
			{
		    result=Num_1/Num_2;
		    printf("\n Result:%.2f",result);
		    }
		    else
		    printf("The anwer is undefined");
		    break;
		case '%':
		    result=fmod(Num_1,Num_2);
		    printf("\n Result:%.2f",result);
		    break;
		case '^':
		    result=pow(Num_1,Num_2);
		    printf("\n Result:%.2f",result);
		    break;
		default:
		    printf("\n The entered operator is invalid");    
	}
	
	return 0;
}
