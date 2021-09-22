#include<stdio.h>
#include<conio.h>
int sum();
void sab();
void main()
{
	clrscr();
	sum();
	sab();
	getch();
}
int sum()
{
	int a,b,c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d\n",c);
	return 0;
}
void sab()
{
	printf("hii");
}