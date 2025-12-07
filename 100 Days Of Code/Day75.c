#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char newline[100];

    printf("Enter filename to append to: ");
    scanf("%s", filename);

    printf("Enter new line of text to append: ");
    getchar();
    if (fgets(newline, sizeof(newline), stdin) == NULL) return 1;

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }

    fprintf(fp, "\n%s", newline);

    fclose(fp);

    printf("New text successfully appended to %s.\n", filename);

    return 0;
}