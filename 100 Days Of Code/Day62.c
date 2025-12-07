#include <stdio.h>
#include <limits.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxSubArraySum(int arr[], int size) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    int all_negative = 1;
    int largest_negative = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            all_negative = 0;
        } else {
            if (arr[i] > largest_negative) {
                largest_negative = arr[i];
            }
        }

        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    if (all_negative) {
        return largest_negative;
    }
    return max_so_far;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", maxSubArraySum(arr, size));

    return 0;
}