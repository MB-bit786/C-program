/*16. Write a C program to read temperature in centigrade and display
a suitable message according to the temperature state below:
Temp < 0 then Freezing
weather Temp 0-10 then Very
Cold weather Temp 10-20 then
Cold weather Temp 20-30
then Normal in Temp Temp
30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include <stdio.h>

int main()
{
    float temp;
    printf("Enter the temperature: ");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Freezing");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("Very Cold");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("Cold");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("Normal");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("Hot");
    }
    else
    {
        printf("Very Hot");
    }
    return 0;
}
