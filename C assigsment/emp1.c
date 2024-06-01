/*Write a program of structure
employee that provides the following
a. information -print and display empno,
empname, address andage
b. Write a program of structure for five
employee that provides the following
information -print and display empno,
empname, address andage*/

#include <stdio.h>

struct employee
{
    int empno;
    char empname[20];
    char address[20];
    int age;
}

int main() 
{
    struct employee e1, e2, e3, e4, e5;
    printf("Enter employee number: ");
    scanf("%d", &e1.empno);
    printf("Enter employee name: ");
    scanf("%s", &e1.empname);
    printf("Enter employee address: ");
    scanf("%s", &e1.address);
    printf("Enter employee age: ");
    scanf("%d", &e1.age);

        printf("Employee number: %d\n", e1.empno);
    printf("Employee name: %s\n", e1.empname);
    printf("Employee address: %s\n", e1.address);
    printf("Employee age: %d\n", e1.age);

    return 0;
}
