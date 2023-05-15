#include<stdio.h>
#include<conio.h>
void main()
{
float pi=3.1415;
float rad,area,volume;
clrscr();
// Read Operation
printf("\n\nEnter radius of a sphere to calculate area and volume of that sphere : ");
scanf("%f",&rad);
// Formula to calculate area and volume of the sphere
area = 4*pi*rad*rad;
volume = (4*pi*rad*rad*rad)/3;
// Write Operation
printf("\nArea of Sphere = %f",area);
printf("\n\nVolume of Sphere = %f",volume);
getch();
}