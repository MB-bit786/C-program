/*12. WAP to accept 5 students name and store it in array*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name[5][20];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", name[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s ", name[i]);
    }
    return 0;
}
