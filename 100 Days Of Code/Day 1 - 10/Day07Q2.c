// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{

    char a;
    printf("Enter the Alphabet: ");
    scanf("%c", &a);

    if (a == 'a' || a == 'o' || a == 'u' || a == 'i' || a == 'e')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}