/*7. Write a program in C to copy one string to another string.*/
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    strcpy(str2, str1);
    printf("Copied string: %s", str2);
    return 0;
}
