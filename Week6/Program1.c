//WAP to find Factorial and Fibonacci Series as Functions
#include<stdio.h>
void fact( );
void fib();
int main(){
    printf("Function Call Start\n");
	fact();
    fib();
    printf("\nTask Completed");

	
	return 0;
}
void fact(){
	int num , f = 1;
	printf("Enter the Number: ");
	scanf("%d", &num);
	while(num>0)
	{
		f = f * num;
		num = num - 1;
	}
	printf("The Factorial is: %d\n", f);
}

void fib(){
    int num , f = 0 , e = 1 , a;
    printf("Enter the Limit: ");
    scanf("%d",&num);
    printf("0 1");
    num = num - 2;
    while (num>0){
        a = e;
        e = e + f;
        f = a;
        num = num - 1;
        printf(" %d",e);
    }
    

}
