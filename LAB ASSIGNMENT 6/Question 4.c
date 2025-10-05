#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[50], password[50];
    char loginUser[50], loginPass[50];
    int i, hasUpper, hasLower, hasDigit;

    
    while (1) {
        printf("Enter a username (5 alphabets): ");
        scanf("%s", username);

        if (strlen(username) != 5) {
            printf("? Username must be exactly 5 characters long.\n");
            continue;  
        }

        int valid = 1;
        for (i = 0; i < 5; i++) {
            if (!isalpha(username[i])) { 
                printf("? Username must contain only alphabets.\n");
                valid = 0;
                break;
            }
        }
        if (valid)
            break; 
    }

    while (1) {
        hasUpper = hasLower = hasDigit = 0;

        printf("Enter a password (6 characters, with at least 1 uppercase, 1 lowercase, 1 digit): ");
        scanf("%s", password);

        if (strlen(password) != 6) {
            printf("? Password must be exactly 6 characters long.\n");
            continue;
        }

        for (i = 0; i < 6; i++) {
            if (isupper(password[i])) hasUpper = 1;
            if (islower(password[i])) hasLower = 1;
            if (isdigit(password[i])) hasDigit = 1;
        }

        if (hasUpper && hasLower && hasDigit)
            break; 
        else {
            printf("? Password must contain at least 1 uppercase, 1 lowercase, and 1 digit.\n");
            continue;
        }
    }

    printf("\n? Account Created Successfully!\n");

    while (1) {
        printf("\nLogin to your account\n");
        printf("Enter username: ");
        scanf("%s", loginUser);
        printf("Enter password: ");
        scanf("%s", loginPass);

        if (strcmp(username, loginUser) == 0 && strcmp(password, loginPass) == 0) {
            printf("\n? Welcome %s, you are now logged in.\n", username);
            break; 
        } else {
            printf("? Incorrect username or password. Try again.\n");
            continue;
        }
    }

    return 0;
}
