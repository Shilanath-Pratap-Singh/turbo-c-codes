#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=1;j<=5;j++)
		{
		 if(i==1||j==1||
		 (i==2&&j==5)||(i==3)||(i==4&&j==5||i==5&&j==5))
		 printf("*");
		 else
		 printf(" ");
		}
	}
	getch();
}