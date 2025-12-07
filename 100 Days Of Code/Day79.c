#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "numbers.txt";
    int num;
    long long sum = 0;
    int count = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("The file contains no numbers.\n");
    }

    return 0;
}