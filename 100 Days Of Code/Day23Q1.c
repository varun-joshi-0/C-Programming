// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main()
{

    float n, a = 2, b = 3, sum = 0;
    printf("Enter the Limit: ");
    scanf("%f", &n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + (a / b);
        a = a + 2;
        b = b + 4;
    }

    printf("%f", sum);

    return 0;
}