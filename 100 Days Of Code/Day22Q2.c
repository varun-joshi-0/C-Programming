// Write to program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + .. up to n terms

#include <stdio.h>
int main()
{

    float n, i, j = 3;
    float sum = 1;
    printf("Enter the Limit: ");
    scanf("%f", &n);

    for (i = 0; i < n - 1; i++)
    {
        sum = sum + (j / (j + 1));
        j = j + 2;
    }

    printf("%f", sum);

    return 0;
}