//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,a[50],b[50],c[50],count=0;
    printf("Input the number of element in list A: ");
    scanf("%d",&m);
    printf("Input the number of element in list B: ");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int e=0;e<n;e++)
    {
        printf("Enter the element %d: ",e+1);
        scanf("%d",&b[e]);
    }
    for(int i=0,u=0;u<50,i<m;u++,i++)
    {
        for(int e=0;e<m;e++)
        {
            if(a[i]==b[e])
            {
                count++;
                c[u]=a[i];

            }
        }
    }
    printf("number of common element is %d ",count);
    printf("common elements are: ");
    for(int u=0;u<50;u++)
    {
        printf("%d ",c[u]);
    }
    return 0;
}
