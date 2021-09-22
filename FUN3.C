#include<stdio.h>
#include<conio.h>
int sum(int x,int y);
void main()
{
	int m,n,s;
	clrscr();
	s=sum(m,n);
	printf("Addition:%d",s);
	getch();
}
int sum(int x int y)
{
	int a,b,c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	return(c);
}