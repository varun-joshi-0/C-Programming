// Find the maximum and minimum element in an array.

#include <stdio.h>
int main()
{

    int n, sum = 0;
    printf("Enter the Number of Elements in Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int z = arr[0], y = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > z)
        {
            z = arr[i];
        }
        if (arr[i] < y)
        {
            y = arr[i];
        }
    }

    printf("Maximum Element: %d\n", z);
    printf("Minimum Element: %d", y);

    return 0;
}