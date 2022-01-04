//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],e;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the elements you wish to search for: ");
    scanf("%d",&e);
    for(int i=0;i<n;i++)
    {
        if(a[i]==e)
        {
            printf("successful search!.\nItem fount at index %d\n",i);

        }
    }
    goto end;
    if(a[0]==-1)
    {
        printf("!");
    }
    else
    {
        end:
        printf("Unsuccessful search!\n-1");
    }
    return 0;

}

