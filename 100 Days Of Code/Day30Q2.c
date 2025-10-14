// Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{

    int n, p = 0, m = 0, zero = 0;
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
        if (arr[i] > 0)
        {
            p++;
        }
        if (arr[i] < 0)
        {
            m++;
        }
        if (arr[i] == 0)
        {
            zero++;
        }
    }

    printf("Number of Positive Elements: %d\n", p);
    printf("Number of Negative Elements: %d\n", m);
    printf("Number of Zeroes: %d\n", zero);

    return 0;
}