// Count even and odd numbers in an array.

#include <stdio.h>
int main()
{

    int n, e = 0, o = 0;
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
        if (arr[i] % 2 == 0)
        {
            e++;
        }
        if (arr[i] % 2 != 0)
        {
            o++;
        }
    }

    printf("Number of Even Elements: %d\n", e);
    printf("Number of Odd Elements: %d", o);

    return 0;
}