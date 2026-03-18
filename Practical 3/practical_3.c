// program to check validation of username and password
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int isValidUsername(const char *username) {
    int i = 0;

    while (username[i] != '\0') {
        if (!isalnum(username[i]) && username[i] != '_') {
            return 0; // Invalid character found
        }
        i++;
    }

    return 1; // Valid username
}

int isValidPassword(const char *password) {
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int i = 0;

    while (password[i] != '\0') {
        if (isupper(password[i])) 
            hasUpper = 1;
        else if (islower(password[i])) 
            hasLower = 1;
        else if (isdigit(password[i])) 
            hasDigit = 1;
        else 
            hasSpecial = 1;

        i++;
    }

    // Password must have all conditions
    if (hasUpper && hasLower && hasDigit && hasSpecial)
        return 1;

    return 0;
}

int main() {
    char username[MAX], password[MAX];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (isValidUsername(username))
        printf("Valid Username\n");
    else
        printf("Invalid Username\n");

    if (isValidPassword(password))
        printf("Valid Password\n");
    else
        printf("Invalid Password\n");

    return 0;
}