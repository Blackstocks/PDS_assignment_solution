//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
    float rad,hei,vol,pi=3.1416;
    printf("Enter the radius of right circular cone:");
    scanf("%f",&rad);
    printf("Enter the height of right circular cone:");
    scanf("%f",&hei);
    vol=(pi*rad*rad*hei)/3;
    printf("The required volume of right circular cone is %6.2f",vol);
    return 0;
}
