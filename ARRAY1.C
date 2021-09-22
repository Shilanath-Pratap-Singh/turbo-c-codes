#include<stdio.h>
#include<conio.h>
void main()
{
	float a[4],b[4];
	int i,j,k;
	clrscr();
	for(i=0;i<=4;i++)
	{
		{
		printf("\nEnter a[%d]:",i);
		scanf("%f",&a[i]);
		}
		for(j=i;j<=i;j++)
		{
		printf("Enter b[%d]:",j);
		scanf("%f",&b[j]);
		}
		printf("\na[%d]+b[%d]=%d",i,j,a[i]+b[j]);
	}
	getch();
}