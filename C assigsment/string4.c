/*4. Write a program in C to count the total number of words in a
string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }

    printf("Total number of words in the string: %d", count + 1);

    return 0;
}
