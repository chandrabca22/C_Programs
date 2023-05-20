#include<stdio.h>
#include<conio.h>
void main()
{
float base,height,area;
clrscr();
// read operation
printf("\n\nEnter the base and height of a tringle to calculate area\n");
scanf("%f %f",&base,&height);
// formula to calculate area of tringle
area = (base*height)/2;
// write operation
printf("Area of the tringle is = %f",area);
getch();
}