#include<stdio.h>
#include<conio.h>
void main()
{
float c,far;
clrscr();
printf("Enter celsius to change into farenheit : ");
scanf("%f",&c);  
// Formula
far=(c*9/5)+32; // it will change celsius into fahrenheit

printf("Fahrenheit is = %f",far);
getch();
}