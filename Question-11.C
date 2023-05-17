#include<stdio.h>
#include<conio.h>
void main()
{
int a,res;
clrscr();
printf("Enter a Number : ");
scanf("%d",&a);
res=(a%2);
if(res==0)
printf("%d is an EVEN number",a);
else
printf("%d is a ODD number",a);
getch();
}