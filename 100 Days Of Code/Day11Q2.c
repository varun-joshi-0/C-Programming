// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{

    float cp, sp, pp, lp;
    printf("Enter the Cost Price: ");
    scanf("%f", &cp);
    printf("Enter the Selling Price: ");
    scanf("%f", &sp);

    if (cp > sp)
    {
        printf("There will be a Loss");
        lp = (cp - sp) / cp * 100;
        printf("\nThe Loss Percent: %f", lp);
    }
    if (sp > cp)
    {
        printf("There will be a Profit");
        pp = (sp - cp) / cp * 100;
        printf("\nThe Profit Percent: %f", pp);
    }
    if (cp == sp)
    {
        printf("Neither Profit nor Loss");
    }

    return 0;
}