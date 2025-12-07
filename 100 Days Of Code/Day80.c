#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void write_records(struct Student students[], int n, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    fclose(fp);
    printf("Student records successfully written to %s.\n", filename);
}

void read_records(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Student s;
    printf("\nStudent Records Read from File:\n");
    printf("Name\tRoll No\tMarks\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll_no, &s.marks) == 3) {
        printf("%s\t%d\t%.2f\n", s.name, s.roll_no, s.marks);
    }

    fclose(fp);
}

int main() {
    struct Student students[2] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 92.0}
    };
    const char *filename = "students.txt";

    write_records(students, 2, filename);
    read_records(filename);

    return 0;
}