/*8. WAP to reverse a string and check that the string is
palindrome or not*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, len, flag = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {   
        printf("%s is a palindrome", str);
    }
    else
    {
        printf("%s is not a palindrome", str);
    }
    return 0;
}