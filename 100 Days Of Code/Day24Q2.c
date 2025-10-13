/*
Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>
int main(){

    int n  ;
    printf("Enter the Limit: ");
    scanf("%d", &n);

    for (int i = 0 ; i < n ; i++){
        int a = 1 ;
        for (int j = 0 ; j <= i ; j++ ){
            printf("%d",a);
            a++ ;
        }
        printf("\n");
    }

    return 0 ;
}