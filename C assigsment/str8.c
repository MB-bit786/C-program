/*8. Write a program in C to count the total number of vowels or
consonants in a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, vowel = 0, consonant = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }

    printf("Total number of vowels: %d\n", vowel);
    printf("Total number of consonants: %d\n", consonant);

    return 0;
}
