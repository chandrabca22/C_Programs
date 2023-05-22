#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int num;
float res;
clrscr();
// Read Operation
printf("\n\nEnter any number to find square root : ");
scanf("%d",&num);
// Finding Square Root
res = sqrt(num);
// Write Operation
printf("\nSquare root of the number %d is = %f",num,res);
getch();
}