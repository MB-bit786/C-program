/*11. WAP to accept 5 numbers from user and display in reverse
order using for loop and array*/

#include <stdio.h>

int main()
{
    int arr[5], i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The reverse order of the numbers are: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
