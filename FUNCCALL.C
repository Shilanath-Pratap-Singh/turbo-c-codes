#include<stdio.h>
#include<conio.h>
add();
mult();
void main()
{       clrscr();
	add();
	mult();
	getch();
}
add()
{
int a=1,b=2,c;
c=a+b;
printf("sum: %d",c);
}
mult()
{
int a=2,b=3,c;
c=a*b;
printf("mult: %d",c);
}
