#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5;
float t_marks,per;
clrscr();
// Read Operation
printf("\n\nEnter the marks of five subjects\n");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
// Calculating Total Marks & Percentage
t_marks = m1+m2+m3+m4+m5;
per = (t_marks*100)/500 ;
// Write Operation
printf("Total marks of five is = %f",t_marks);
printf("\nPercentage of your five subjects is = %f",per);
getch();
}