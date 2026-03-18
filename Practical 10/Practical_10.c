#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidUsername(const char *username) {
    int i;

    if (!isalpha(username[0]))
        return 0;

    if (strlen(username) < 5)
        return 0;

    for (i = 0; username[i] != '\0'; i++) {
        if (!isalnum(username[i]) && username[i] != '_')
            return 0;
    }

    return 1;
}

int main() {
    char username[100];

    printf("Enter username: ");
    scanf("%s", username);

    if (isValidUsername(username))
        printf("Valid Username\n");
    else
        printf("Invalid Username\n");

    return 0;
}