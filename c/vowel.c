/*
    autor: shadelx
    description:
        Program to idenfity if chr is a vowel or not
*/

#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;

    int bin = 010;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.\n", c);
    else
        printf("%c is a consonant.\n", c);
    
    printf("lowercase value:%d\n", lowercase_vowel);
    printf("uppercase value:%d\n", uppercase_vowel);
    printf("binary value:%d", bin);

    return 0;
}
