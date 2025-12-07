#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_fp, *output_fp;
    char ch;

    input_fp = fopen("input.txt", "r");
    if (input_fp == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    output_fp = fopen("output.txt", "w");
    if (output_fp == NULL) {
        printf("Error creating output.txt\n");
        fclose(input_fp);
        return 1;
    }

    while ((ch = fgetc(input_fp)) != EOF) {
        fputc(toupper(ch), output_fp);
    }

    printf("Content successfully converted to uppercase and written to output.txt\n");

    fclose(input_fp);
    fclose(output_fp);

    return 0;
}