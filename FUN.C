#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
	clrscr();
	sum();
	getch();
}
void sum()
{
	int a,b,c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition is :%d",c);
}