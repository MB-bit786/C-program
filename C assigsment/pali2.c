/*10. WAP to perform Palindrome number using for loop and function*/

#include <stdio.h>

int main()
{
    int num, temp, rev = 0, rem;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
    return 0;
}
