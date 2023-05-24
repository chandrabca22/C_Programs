#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si;
clrscr();
printf("\n\nEnter principal, Rate & time to calculate Simple interest\n");
scanf("%f %f %f",&p,&r,&t);
si = (p*r*t)/100;
printf("\nSimple Interest is : %f",si);
getch();
}