#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	a=b=1;
	while(a)
	{
	a=b++<=3;
	printf("%d %d\n",a,b);
	}
	printf("%d %d\n",a+10,b+10);
	getch();
}