#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];
    const char *filename = "info.txt";

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("Contents of %s:\n", filename);
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}