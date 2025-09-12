#include <stdio.h>
int main(){
    int a ;
    printf("Enter the Number: ");
    scanf("%d",&a);
    if ( a % 2 == 0)
    {
    printf("The Given number is Even");
    }
    else
    {
    printf("The Given number is Odd");
    }
    return 0;
}