/*12. Write a program in C to find the number of times a given
word 'is' appears in the given string*/

#include <stdio.h>

int main()
{
    char str[100], word[100];
    int count = 0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the word: ");
    gets(word);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'i' && str[i + 1] == 's')
        {
            count++;
        }
    }
    printf("The number of times the word 'is' appears in the string is: %d", count);
    return 0;
}
