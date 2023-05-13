#include<stdio.h>
#include<conio.h>
void main()
{
float len,bre,area,perimeter;
clrscr();
// read operation
printf("\nEnter length and breadth to calculate area and perimeter of rectangle\n");
scanf("%f %f",&len,&bre);
// formula for calculate area and perimeter of rectangle
area = len*bre;
perimeter = (2*len)+(2*bre);
// display operation
printf("\nArea of rectangle = %f",area);
printf("\n\nPerimeter of rectangle = %f",perimeter);
getch();
}