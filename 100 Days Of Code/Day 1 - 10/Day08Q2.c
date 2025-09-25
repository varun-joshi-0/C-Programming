// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the First No.: ");
    scanf("%d", &a);
    printf("Enter the Second No.: ");
    scanf("%d", &b);
    printf("Enter the Third No.: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("A is the Greatest");
        }
    }
    if (b > c)
    {
        if (b > a)
        {
            printf("B is the Greatest");
        }
    }
    if (c > a)
    {
        if (c > b)
        {
            printf("C is the Greatest");
        }
        return 0;
    }
}