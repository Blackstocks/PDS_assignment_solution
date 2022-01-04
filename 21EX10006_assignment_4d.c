//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11


#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Please enter a positive integer to be reversed: ");
    scanf("%d",&x);
    printf("The reversed number is: ");
    while (x>0)
    {
        y=x%10;
        x=x/10;
        printf("%d",y);
    }
    return 0;
}