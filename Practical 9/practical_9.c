#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(const char *password) {
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int i;

    if (strlen(password) < 8)
        return 0;

    for (i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else hasSpecial = 1;
    }

    return (hasUpper && hasLower && hasDigit && hasSpecial);
}

int main() {
    char password[100];

    printf("Enter password: ");
    scanf("%s", password);

    if (isStrongPassword(password))
        printf("Strong Password\n");
    else
        printf("Weak Password\n");

    return 0;
}