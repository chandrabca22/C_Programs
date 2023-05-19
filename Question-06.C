#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,add,sub,mul,div;
clrscr();

// Read Operation
printf("Enter the first value : ");
scanf("%d",&num1);
printf("Enter the second value : ");
scanf("%d",&num2);

// Mathmetical Operation
add = num1+num2;
sub = num1-num2;
mul = num1*num2;
div = num1/num2;

// Write Operation
printf("\n\nAddition of two number is = %d\n",add);
printf("Substraction of two number is = %d\n",sub);
printf("Multiplication of two number is = %d\n",mul);
printf("Division of two number is = %d\n",div);

getch();
}   // main ends