//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11


#include<stdio.h>
#include<math.h>
int factorial(int number)
{
    if(number==1 || number==0)
    {
        return 1;
    }
    else
    {
        return (number*factorial(number-1));
    }
}
int main()
{
    int n,r,v;
    printf("enter the value for n: ");
    scanf("%d",&n);
    printf("enter the value for r: ");
    scanf("%d",&r);
    v=factorial(n)/(factorial(r)*(factorial(n-r)));
    printf("the value of nCr is %d ",v);
    return 0;
}