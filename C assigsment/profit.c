/*Write a C program to calculate profit and loss on a transaction.*/

#include <stdio.h>
int main()
{
    int cp, sp, profit, loss;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    if (cp > sp)
    {
        profit = cp - sp;
        printf("Profit = %d\n", profit);
    }
    else
    {
        loss = sp - cp;
        printf("Loss = %d\n", loss);
    }
    return 0;
}
