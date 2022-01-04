//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
    float eng,math,phy,cem,cs,total,per;
    printf("Enter the mark of English out of 100: ");
    scanf("%f",&eng);
    printf("Enter the mark of Mathematics out of 100: ");
    scanf("%f",&math);
    printf("Enter the mark of Physics out of 100: ");
    scanf("%f",&phy);
    printf("Enter the mark of Chemistry out of 100: ");
    scanf("%f",&cem);
    printf("Enter the mark of Computer Science out of 100: ");
    scanf("%f",&cs);
    total=(eng+math+phy+cem+cs);
    per=(total)/5;
    printf("Your total mark is %5.2f out of 500\n",total);
    printf("Your percentage obtained is %6.4f percent",per);
    return 0;


}
