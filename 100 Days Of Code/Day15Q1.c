//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
	int num , f = 1;
	printf("Enter the Number: ");
	scanf("%d", &num);
	while(num>0)
	{
		f = f * num;
		num = num - 1;
	}
	printf("The Factorial is: %d\n", f);
    return 0;
}