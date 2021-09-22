#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2],b[2],i,j;
	clrscr();
	printf("Enter a[i]:");

	for(i=0;i<=2;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter b[j]:");
	for(j=0;j<=2;j++)
	{
	scanf("%d",&b[j]);
	}
	printf("\na[0]+b[0]=%d",a[0]+b[0]);
	printf("\na[1]+b[1]=%d",a[1]+b[1]);
	printf("\na[2]+b[2]=%d",a[2]+b[2]);
	getch();
}