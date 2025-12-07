#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void write_binary(const char *filename) {
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    struct Employee emp = {"Alice", 101, 75000.50};
    fwrite(&emp, sizeof(struct Employee), 1, fp);

    fclose(fp);
    printf("Employee data successfully written to %s (binary).\n", filename);
}

void read_binary(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Employee emp_read;
    fread(&emp_read, sizeof(struct Employee), 1, fp);

    printf("\nEmployee Details Read from Binary File:\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);

    fclose(fp);
}

int main() {
    const char *filename = "employee.bin";
    write_binary(filename);
    read_binary(filename);
    return 0;
}