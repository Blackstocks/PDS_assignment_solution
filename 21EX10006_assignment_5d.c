//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
    int min,i,n,count=0,a[100];
    printf("Enter the Number of elements in the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the number %d ",i+1);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(int e=0;e<n;e++)
    {
        if(a[e]==min)
        {
            count++;
        }
    }

    printf("The minimum value is %d and the frequency of the minimum value is %d ",min,count);
    return 0;
}
