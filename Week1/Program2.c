#include <stdio.h>

int main() {
    float P,R,T,SI;
    printf("Enter the Principal: ");
    scanf("%f",&P);
    printf("Enter the Rate: ");
    scanf("%f",&R);
    printf("Enter the Time: ");
    scanf("%f",&T);
    
    SI = P*R*T/100;
    printf("The Simple Intrest calculated: %f",SI);


    return 0;
}