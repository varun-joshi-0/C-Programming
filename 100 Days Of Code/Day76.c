#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char buffer[100];

    printf("Enter a filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    } else {
        printf("File opened successfully.\n");
        printf("Content:\n");

        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            printf("%s", buffer);
        }

        fclose(fp);
    }

    return 0;
}