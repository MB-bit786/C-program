/*6. Write a program in C to count the total number of alphabets,
digits and special characters in a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int alpha = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }

    printf("Total number of alphabets: %d\n", alpha);
    printf("Total number of digits: %d\n", digit);
    printf("Total number of special characters: %d\n", special);

    return 0;
}