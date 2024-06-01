/*5. Write a program in C to compare two strings without
using string library functions.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, flag = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("%s is not equal to %s", str1, str2);
    }
    else
    {
        printf("%s is equal to %s", str1, str2);
    }

    return 0;
}
