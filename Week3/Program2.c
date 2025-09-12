//WAP to check the Input Year Is a Leap Year or not

#include <stdio.h>
int main(){
    int a  ;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a % 100 == 0 )
    {
        if (a % 400 == 0)
        {
            printf("It is a Leap Year");
        }
        else
        {
        printf("It is not a Leap Year");
        }
    
    }
    if (a % 100 != 0)
    {
        if (a % 4 == 0)
        {
            printf("It is a Leap Year");
        }
        else
        {
        printf("It is not a Leap Year");
        }
    }
    
return 0;
}