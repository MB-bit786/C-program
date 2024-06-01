/* Write a C program to accept two integers and check whether they
are equal or not*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("The numbers are equal");
    }
    else
    {
        printf("The numbers are not equal");
    }
    return 0;
}