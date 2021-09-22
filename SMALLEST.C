#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3]={3,4,6};
	clrscr();
	if(a[0]<a[1])
	{
		if(a[0]<a[2])
		{
		printf("a[%d] is smallest",a[0]);
		}
		else
		printf("a[%d] is smallest",a[2]);
	}
	else
	{
		if(a[1]<a[2])
		printf("a[%d] is smallest",a[1]);
		else
		printf("a[%d] is smallest",a[2]);
	}
	getch();
}