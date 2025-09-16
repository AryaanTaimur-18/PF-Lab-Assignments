#include <stdio.h>

int main()
{
	float Akhlaq,Honesty,Prayer,Fasting,Zakat,Social,Conflict,CI;
	
	printf("----EVALUATING ISLAMIC CHARACTER----\n\n");
	
	printf("Input the attributes on a scale of 1-10\n\n");
	printf("Akhlaq & Manners:");
	
	scanf("%f",&Akhlaq);
	
	printf("Honesty & Trustworthiness:");
	scanf("%f",&Honesty);
	
	printf("Zakat & Charity:");
	scanf("%f",&Zakat);
	
	printf("Social Behavior:");
	scanf("%f",&Social);
	
	printf("Conflict Resolution Skills:");
	scanf("%f",&Conflict);
	
	printf("Prayer Regularity (0 = Irregular, 1 = Regular): ");
    scanf("%f", &Prayer);

    printf("Fasting (0 = Never, 1 = Sometimes, 2 = Always): ");
    scanf("%f", &Fasting);
	
	CI=(Akhlaq*2.5)+(Honesty*2.0)+(Prayer*15)+(Fasting*5)+(Zakat*1.0)+(Social*1.0)+(Conflict*1.0);
	
	printf("Character Index:%.2f\n",CI);
	
	if(CI>=85 && CI<=100)
	{
		printf("Classification: Excellent Muslim Character\n");
		printf("Remarks: Role model for society\n");
	}
	else if(CI>=70 && CI<=84)
	{
		printf("Classification: Good Muslim Character\n");
		printf("Remarks: Practicing believer\n");
	}
	else if(CI>=50 && CI<=69)
	{
		printf("Classification: Average Character\n");
		printf("Remarks: Needs minor improvement\n");
	}
	else if(CI>=30 && CI<=49)
	{
		printf("Classification: Needs Improvement\n");
		printf("Remarks: Work on Akhlaq & Ibadah\n");
	}
	else if(CI<30)
	{
		printf("Classification: Weak Character\n");
		printf("Remarks: Requires serious guidance\n");
	}
	
    return 0;	
}
