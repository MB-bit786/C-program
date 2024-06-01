/*8. WAP to accept the height of a person in centimeters and
categorize the person according to their height.*/

#include <stdio.h>

int main()
{
    float height;
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    if (height < 150)
    {
        printf("you are dwarf");
    }
    else if (height >= 150 && height <= 170)
    {
        printf("you are average");
    }
    else
    {
        printf("you are tall");
    }
    return 0;
}