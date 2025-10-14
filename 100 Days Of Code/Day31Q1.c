// Search for an element in an array using linear search.

#include <stdio.h>
int main()
{
    int n, s;
    printf("Enter the Number of Elements in Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a Number to Search: ");
    scanf("%d", &s);

    for (int i = 0; i < n; i++)
    {
        int f = 0;
        if (arr[i] == s)
        {
            printf("Found at Index %d", i);
        }
    }

    return 0;
}
