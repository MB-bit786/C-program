/*14.Write a program in C to combine two
strings manually*/
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("The combined string is: %s%s", str1, str2);
    return 0;
}
