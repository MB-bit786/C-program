/*3. Write a program in C to print individual characters of a string in
reverse order*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, len;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}