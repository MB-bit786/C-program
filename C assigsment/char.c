/*9. C Program to Check Uppercase or Lowercase or Digit
or Special Character*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("%c is a lowercase character", ch);
    else if (ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase character", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit", ch);
    else
        printf("%c is a special character", ch);
    return 0;
}
