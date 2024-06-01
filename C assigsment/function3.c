//3. WAP to find reverse of string using recursion
#include <stdio.h>
#include <string.h>

void reverse(char *str, int len)
{
    if (len == 0)
        return;
    else
    {
        printf("%c", str[len - 1]);
        reverse(str, len - 1);
    }
}

int main()
{
    char str[100];
    int len;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    reverse(str, len);
    printf("\n");
    return 0;
}
