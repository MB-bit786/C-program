/*9. WAP to show difference between Structure and Union.*/

#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

union marks
{
    int marks1;
    char name[20];
    float marks2;
};

int main()
{
    struct student s1;
    union marks m1;

    return 0;
}
