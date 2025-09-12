#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Value for 'a': ");
    scanf("%d",&a);
    printf("Enter Value for 'b': ");
    scanf("%d",&b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("Value of a: %d",a);
    printf("\nValue of b: %d",b);
    return 0 ;
}