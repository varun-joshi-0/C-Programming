#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int capitalizeNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            str[i] = toupper((unsigned char)str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
    }

    printf("%s\n", str);
    return 0;
}