//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,sum,div,rim;
    printf("Enter integer a: ");
    scanf("%d",&a);
    printf("Enter integer b: ");
    scanf("%d",&b);
    printf("Enter integer c: ");
    scanf("%d",&c);
    sum=(a+b);
    printf("The sum of first two number is %d\n",sum);
    div=sum/c;
    printf("The quotient of the sum of first to number devided by third number is %d\n",div);
    rim=sum%c;
    printf("The remiainder of the division is %d\n",rim);
    return 0;

}
