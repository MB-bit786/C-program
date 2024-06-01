/*10. Write a program in C to extract a substring from a given string*/

#include <stdio.h>

int main()
{
    char str[100], sub[100];
    int i, j, count = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a substring: ");
    gets(sub);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == sub[count])
        {
            count++;
            if (count == 3)
            {
                break;
            }
        }
        else
        {
            count = 0;
        }
    }
    for (j = i; str[j] != '\0'; j++)
    {
        printf("%c", str[j]);
    }
    return 0;
}
