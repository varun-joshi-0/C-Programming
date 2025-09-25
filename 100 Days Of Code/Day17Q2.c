// Program to check if a number is prime.

#include <stdio.h>
int main()
{

    int n, i;
    int prime = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);

    if (n == 2 || n == 3)
    {
        printf("Its a Prime Number");
    }

    else if (n == 0 || n == 1)
    {
        printf("Its neither Prime nor Composite");
    }

    else
    {

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("Its a Prime Number");
        }
        else
        {
            printf("Its not a Prime Number");
        }
    }

    return 0;
}