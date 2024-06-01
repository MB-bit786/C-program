/*30. If bill exceeds Rs. 800 then a surcharge of 18% will be
charged and the minimum bill should be of Rs. 256/-*/

#include <stdio.h>

int main()
{
    int bill;
    printf("Enter the bill amount: ");
    scanf("%d", &bill);

    if (bill > 800)
    {
        printf("Bill amount: %d\n", bill);
        printf("Surcharge: %d\n", bill * 18 / 100);
        printf("Minimum bill: %d\n", 256);
    }
    else
    {
        printf("Bill amount: %d\n", bill);
        printf("Surcharge: 0\n");
        printf("Minimum bill: %d\n", bill);
    }

    return 0;
}
