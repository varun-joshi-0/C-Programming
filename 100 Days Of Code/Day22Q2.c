// Write to program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + .. up to n terms

#include <stdio.h>
int main()
{

    float n, i;
    float sum = 1;
    printf("Enter the Limit: ");
    scanf("%f", &n);

    for (i = 3; i < n;)
    {
        sum = sum + (i / (i + 1));
        i = i + 2;
    }

    printf("%f", sum);

    return 0;
}