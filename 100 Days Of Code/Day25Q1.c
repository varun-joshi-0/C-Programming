// Program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for (int i = 0; i < n ; i++) {
        for (int j = n - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
