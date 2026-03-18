#include <stdio.h>
#include <string.h>

int isValidEmail(const char *email) {
    int i, at = 0, dot = 0;

    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == ' ')
            return 0;
        if (email[i] == '@')
            at++;
        if (email[i] == '.')
            dot++;
    }

    return (at == 1 && dot >= 1);
}

int main() {
    char email[100];

    printf("Enter email: ");
    scanf("%s", email);

    if (isValidEmail(email))
        printf("Valid Email\n");
    else
        printf("Invalid Email\n");

    return 0;
}