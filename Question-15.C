#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si;
// Algorithm to Solve this Problem
// Step 1 - Read principal, rate & time.
// Step 2 - Apply in the formula.
// Step 3 - Display the simple interest.
clrscr();
printf("\n\nEnter principal, Rate & time to calculate Simple interest\n");
scanf("%f %f %f",&p,&r,&t);
si = (p*r*t)/100;
printf("\nSimple Interest is : %f",si);
getch();
}