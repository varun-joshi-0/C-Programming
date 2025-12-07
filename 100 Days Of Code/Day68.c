#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements (0 to %d, one missing): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    int missingNumber = expectedSum - actualSum;
    printf("%d\n", missingNumber);

    return 0;
}