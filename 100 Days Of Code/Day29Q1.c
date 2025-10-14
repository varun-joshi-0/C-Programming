// Find the sum of array elements.

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

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}