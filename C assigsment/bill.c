/*9. Write a program in C to calculate and print the electricity bill of a
given customer. The customer ID, name, and unit consumed by
the user should be captured from the keyboard to display the
total amount to be paid to the customer. The charge are as follow
:
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than
600
25. @1.50
26. 600 and above but less than
800
27. @1.80
28. 800 and above 29. @2.00*/

#include <stdio.h>

int main()
{
    int id, unit;
    float charge;

    printf("Enter customer id: ");
    scanf("%d", &id);

    printf("Enter unit consumed: ");
    scanf("%d", &unit);

    if (unit <= 20)
    {
        charge = unit * 1.20;
    }
    else if (unit <= 350)
    {
        charge = 20 * 1.20 + (unit - 20) * 1.50;
    }
    else if (unit <= 600)
    {
        charge = 20 * 1.20 + 160 * 1.50 + (unit - 350) * 1.80;
    }
    else
    {
        charge = 20 * 1.20 + 160 * 1.50 + 250 * 1.80 + (unit - 600) * 2.00;
    }
}