/*13. Write a program in C to remove characters from a string
except alphabets.*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, j, count = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}
