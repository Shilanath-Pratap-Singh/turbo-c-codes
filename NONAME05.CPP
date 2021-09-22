#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	int i,j;
	clrscr();
	printf("enter value:") ;
	scanf("%s",&a);
	//printf("%s",a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%s",a[j]);
		}
	}
	getch();
}