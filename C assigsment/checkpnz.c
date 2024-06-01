//10. WAP to check whether a number is negative, positive or zero

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The number is negative");
    }
    else if (num > 0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is zero");
    }
    return 0;
}
