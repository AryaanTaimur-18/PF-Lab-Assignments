#include<stdio.h>
int main(){
	int i;
    char arr[100];
    int counter = 0;
    char ch;

    printf("Enter a string to reverse: ");
    while(counter < 100){
        ch = getchar();
        if(ch == '\n'){
            break;
        } else{
        arr[counter] = ch;
        counter++;
        }
    }
    arr[counter] = '\0';
    printf("\noriginal string: %s", arr);
    int length = counter;
    for(i = 0; i < length/2; i++){
        char temp = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1] = temp;
    }
    printf("\nreversed String: %s", arr);

    int start = 0;
    for (i = 0; i < length; i++)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            int end = i - 1;
            while(start<end){
                char temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }  
    }

    printf("\nreversed word string: %s", arr);
    
    return 0;
}
