//WAP to print the n no. with the gap of 2
#include<stdio.h>
int main(){

    int n, i ;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    for (i = 1 ; i<=n ; ) {
        printf("%d\n",i);
        i = i + 2;
    }

    return 0 ;
}