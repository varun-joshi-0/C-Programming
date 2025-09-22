//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char c ;
    int a ;


    printf("Enter a character: ");
    scanf(" %c", &c); 

    a = (int) c;

    if (a >= 65 && a <= 90){
        printf("Uppercase Alphabet");
    }
    else if (a >= 97 && a <= 122){
        printf("Lowercase Alphabet");
    }
    else if (a >= 49 && a <= 57 ){
        printf("Digit");
    }
    else {
        printf("Special Character");
    }

    return 0;
}