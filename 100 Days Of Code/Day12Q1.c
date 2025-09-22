/*
Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled
*/

#include <stdio.h>
int main()
{

    int n, f = 0;
    printf("Enter the Number of Late Days: ");
    scanf("%d", &n);

    if (n <= 5)
    {
        f = 2 * n;
        printf("Your Total Fine is: %d Rs", f);
    }

    else if (n > 5 && n <= 10)
    {
        f = 2 * 5 + (n - 5) * 4;
        printf("Your Total Fine is: %d Rs", f);
    }
    else if (n > 10 && n <= 30)
    {
        f = 2 * 5 + 4 * 5 + (n - 10) * 6;
        printf("Your Total Fine is: %d Rs", f);
    }
    else
    {
        printf("Your Membership has been Cancelled");
    }

    return 0;
}