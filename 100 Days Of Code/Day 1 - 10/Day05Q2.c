// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{

    int t, h = 0, m = 0, s = 0, temp;
    printf("Enter the Time(in sec): ");
    scanf("%d", &t);

    while (t > 0)
    {
        if (t >= 3600)
        {
            h = t / 3600;
            t = t - 3600 * h;
        }
        else if (t > 60)
        {
            m = t / 60;
            t = t - 60 * m;
            s = t;
            t = t - s;
        }
    }
    printf("Its %d Hrs %d Min %d Sec", h, m, s);

    return 0;
}