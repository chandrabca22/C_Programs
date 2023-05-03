#include<stdio.h>
#include<conio.h>
void main()
{
    int a; char b; float c;
    clrscr();
    // code for read integer, character and real numbers. 
    printf("Enter any integer : ");
    scanf("%d",&a); // integer
    printf("Enter any character : ");
    scanf("%c",&b);  // character
    printf("Enter any real number : ");
    scanf("%f",&c); // real number
    // code for displaying integer, character and real numbers.
    printf("Your integer is = %d\n",a); 
    printf("Your character is = %c\n",b); 
    printf("Your real number is = %f\n",c); 
    getch();
}  // main ends