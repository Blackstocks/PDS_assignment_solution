//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,a[10],b[10],c[20],k=0;
    printf("Input the number of element in list M: ");
    scanf("%d",&m);
    printf("Input the number of element in list N: ");
    scanf("%d",&n);
    printf("please enter the integer in shorted order\n");
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
    for(int u=0;u<m;u++)
    {
        for(int w=0;w<n;w++)
        {
            if(a[u]==b[w])
            {
                c[k]=b[w];
                k++;
            }
        }
    }
    printf("Common elements: ");
    for(int d=0;d<k+1;d++)
    {
        printf("%d ",c[d]);
    }
    return 0;
}
