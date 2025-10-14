// Program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = n - i; k <= 5; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}