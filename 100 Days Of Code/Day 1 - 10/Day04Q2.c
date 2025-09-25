// Program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the Limit: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of the First %d Natural Numbers = %d\n", n, sum);

    return 0;
}