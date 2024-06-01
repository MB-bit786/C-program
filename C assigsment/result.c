/*Write a C program to determine eligibility for admission to a
professional course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55
and Marks in Chem>=50 and Total in all three subject >=190 or
Total in Maths and Physics >=140 ---- Input the marks obtained
in
Physics :65 Input the marks obtained in Chemistry :51 Input the
marks obtained in Mathematics :72 Total marks of Maths, Physics
and Chemistry : 188 Total marks of Maths and Physics : 137 The
candidate is not eligible.*/

#include <stdio.h>

int main()
{
    int maths,phy,chem,total;
    printf("Enter the marks obtained in Maths:");
    scanf("%d",&maths);
    printf("Enter the marks obtained in Physics:");
    scanf("%d",&phy);
    printf("Enter the marks obtained in Chemistry:");
    scanf("%d",&chem);
    total=maths+phy+chem;
    if(total>=190 || maths+phy>=140)
    {
        printf("The candidate is eligible.");
    }
    else
    {
        printf("The candidate is not eligible.");
    }
    return 0;
}