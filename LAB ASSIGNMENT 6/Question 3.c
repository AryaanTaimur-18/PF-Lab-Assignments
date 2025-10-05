#include <stdio.h>

int no();

int no(){
	int x;
	printf("Enter the number of rows (odd number): ");
    scanf("%d", &x);
    
    while(1)
    {
    	if(x%2!=0){
    		return x;
		}
		else{
			printf("Enter an odd number:");
			scanf("%d", &x);
		}
	}
	
}

int main() {
    int n=no();
    int i,j,k;

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }

        for (k = 1; k <= ((2 * i) - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

for (i = n-1; i >=1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }

        for (k = 1; k <= ((2 * i) - 1); k++) {
            printf("*");
        }
        printf("\n");
}
printf("\n Same pattern using while loop:\n");
while (i <= n)
{
   int j = i;
   while (j<n){
       printf(" ");
       j++;
   }
   int k = 1;
   while (k <= ((2*i)-1)){
       printf("*");
       k++;
   }
   printf("\n");
   i++;
}
i = n-1;
while(i>=1){
    int j = n;
    while(j>i){
        printf(" ");
        j--;
    }
    int k = 1;
    while(k <= ((2*i)-1)){
        printf("*");
        k++;
    }
    i--;
    printf("\n");
}

return 0;
}
