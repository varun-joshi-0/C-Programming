#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int nums1[], int m, int nums2[], int n) {
    int i = 0;
    int j = 0;
    int k = 0;
    int mergedSize = m + n;
    int mergedArray[mergedSize];

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            mergedArray[k++] = nums1[i++];
        } else {
            mergedArray[k++] = nums2[j++];
        }
    }

    while (i < m) {
        mergedArray[k++] = nums1[i++];
    }

    while (j < n) {
        mergedArray[k++] = nums2[j++];
    }

    for (int l = 0; l < mergedSize; l++) {
        printf("%d ", mergedArray[l]);
    }
    printf("\n");
}

int main() {
    int m, n;

    printf("Enter size of nums1: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter elements of nums1 (sorted): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of nums2: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter elements of nums2 (sorted): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    mergeArrays(nums1, m, nums2, n);

    return 0;
}