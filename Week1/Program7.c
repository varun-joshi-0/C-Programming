#include <stdio.h>
#include <math.h>

int main() {
    float P,R,T,CA,CI,r;
    printf("Enter the Principal: ");
    scanf("%f",&P);
    printf("Enter the Rate: ");
    scanf("%f",&R);
    printf("Enter the Time: ");
    scanf("%f",&T);
    r = 1 + (R/100);
    CA = P * pow(r,T);
    CI = CA - P;
    
    printf("The Compound Intrest calculated: %f",CI);


    return 0;
}