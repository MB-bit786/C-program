//6. Find the Character Is Vowel or Not

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a vowel", ch);
    else
        printf("%c is a consonant", ch);
    return 0;
}
