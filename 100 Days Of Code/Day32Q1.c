// Merge two arrays.

#include <stdio.h>
int main()
{

    int m, n;
    printf("Enter the Number of Elements in First Array: ");
    scanf("%d", &m);
    printf("Enter the Number of Elements in Second Array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], arr[m + n];

    printf("Enter the Elements in Array 1: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the Elements in Array 2: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < m; i++)
    {
        arr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        arr[m + i] = arr2[i];
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}