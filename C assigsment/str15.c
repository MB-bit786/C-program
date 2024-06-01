/*15. Write a program in C to find the largest and smallest words in a
string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, count = 0, max = 0, min = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 0;
        }
    }
}
