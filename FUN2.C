#include<stdio.h>
#include<conio.h>
int sum(int x ,int y);    //function declaration
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);           //function call
	printf("%d",c);
	getch();
}
int sum(int x ,int y)    //function definition
{
int xx,yy,s;
s=xx+yy;
return(s);
}