#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int xor_sum = 0;
    for (int i = 0; i < n; i++) {
        xor_sum ^= nums[i];
    }

    for (int i = 1; i < n; i++) {
        xor_sum ^= i;
    }

    printf("%d\n", xor_sum);

    return 0;
}