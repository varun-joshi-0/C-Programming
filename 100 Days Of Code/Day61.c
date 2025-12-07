#include <stdio.h>
#include <stdlib.h>

void findFirstNegative(int arr[], int n, int k) {
    int *queue = (int *)malloc(n * sizeof(int));
    int front = 0, rear = 0;
    int i;

    for (i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[rear++] = i;
        }
    }

    for (; i < n; i++) {
        if (front == rear) {
            printf("0 ");
        } else {
            printf("%d ", arr[queue[front]]);
        }

        if (front < rear && queue[front] <= (i - k)) {
            front++;
        }

        if (arr[i] < 0) {
            queue[rear++] = i;
        }
    }

    if (front == rear) {
        printf("0");
    } else {
        printf("%d", arr[queue[front]]);
    }

    printf("\n");
    free(queue);
}

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the window size (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size k.\n");
        return 1;
    }

    printf("Output: ");
    findFirstNegative(arr, n, k);

    return 0;
}