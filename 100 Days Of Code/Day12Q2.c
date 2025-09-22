/*
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/

#include <stdio.h>
int main()
{

    int a, total;
    printf("Enter Your Power Usage(in Units): ");
    scanf("%d", &a);
    total = 0;

    if (a <= 100)
    {
        total = a * 5;
    }
    else if (a > 100 && a <= 200)
    {
        total = 100 * 5 + (a - 100) * 7;
    }
    else if (a > 200 && a <= 300)
    {
        total = 100 * 5 + 100 * 7 + ((a - 200) * 10);
    }
    else
    {
        total = 100 * 5 + 100 * 7 + 100 * 10 + ((a - 300) * 12);
    }
    printf("Your Total Bill is: %d Rs", total);

    return 0;
}