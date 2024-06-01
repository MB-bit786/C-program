/*9. Write a program in C to find the maximum number of
characters in a string.*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, max = 0, count = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 0;
        }
    }
    if (count > max)
    {
        max = count;
    }
    printf("The maximum number of characters in the string is: %d", max);
    return 0;
}
