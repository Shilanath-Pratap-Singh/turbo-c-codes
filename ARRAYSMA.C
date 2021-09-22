#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10]={3,2,3,8,4,3,3,3,7},i,b=a[0];
	clrscr();
	for(i=0;i<=2;i++)
	{
		if(a[i]<b)
		{
		 b=a[i];
		}
	}
	printf("%d is smallest value",b);
	getch();
}