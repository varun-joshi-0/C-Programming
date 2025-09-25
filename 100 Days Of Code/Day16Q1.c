
// Program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main()
{
    int num;
    int binary[32]; // assuming 32-bit integer
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary representation: 0\n");
    }
    else
    {
        int n = num;
        while (n > 0)
        {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        printf("Binary representation of %d = ", num);
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
        printf("\n");
    }

    return 0;
}
