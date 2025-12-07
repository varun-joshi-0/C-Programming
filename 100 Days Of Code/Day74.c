#include <stdio.h>

int main() {
    FILE *source_fp, *dest_fp;
    char source_filename[100], dest_filename[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source_filename);
    printf("Enter destination filename: ");
    scanf("%s", dest_filename);

    source_fp = fopen(source_filename, "r");
    if (source_fp == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    dest_fp = fopen(dest_filename, "w");
    if (dest_fp == NULL) {
        printf("Error creating destination file.\n");
        fclose(source_fp);
        return 1;
    }

    while ((ch = fgetc(source_fp)) != EOF) {
        fputc(ch, dest_fp);
    }

    printf("Content successfully copied from %s to %s.\n", source_filename, dest_filename);

    fclose(source_fp);
    fclose(dest_fp);

    return 0;
}