#include<stdio.h>
#include<conio.h>
void main()
{
float f,cel;
clrscr();
printf("Enter fahrenheit to change into celsius : ");
scanf("%f",&f);  // for e.x - 45 fahrenheit
// Formula
cel=(f-32)*5/9; // it will change fahrenheit into celsius

printf("Celsius is = %f",cel); // Celsius is = 7.22222

getch();
}