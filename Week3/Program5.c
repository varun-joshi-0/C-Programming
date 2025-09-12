//WAP to check an Alphabet is a Vowel or Consonant

#include<stdio.h>
int main(){

    char a ;
    printf("Enter the Alphabet: ");
    scanf("%c",&a);

    if ( a == 'a' || a == 'o' || a == 'u' || a == 'i' || a == 'e'){
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }

    return 0 ;
}