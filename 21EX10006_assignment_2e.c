//Name: Ankit kumar soni
//Dept: geology and geophysics
//roll no. 21EX10006
//package: codeblock
//operating system: windows 11

#include<stdio.h>
#include<math.h>
int main()
{
   float  x1,y1,x2,y2,m,n,x,y;
   printf("Enter the x co-ordinate of point A: ");
   scanf("%f",&x1);
   printf("Enter the y co-ordinate of point A: ");
   scanf("%f",&y1);
   printf("Enter the x co-ordinate of point B: ");
   scanf("%f",&x2);
   printf("Enter the y co-ordinate of point B: ");
   scanf("%f",&y2);
   printf("Enter the ratio in which you want to divide the line segment internally: ");
   scanf("%f%f",&m,&n);
   x=((m*x2)+(n*x1))/(m+n);
   y=((m*y2)+(n*y1))/(m+n);
   printf("The co-ordinate of point P which internally divides AB in the ratio m:n is (%4.2f,%4.2f)",x,y);
   return 0;


}
