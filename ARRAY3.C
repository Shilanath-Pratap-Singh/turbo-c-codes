#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2],b[2],i,j;
	clrscr();
	for(i=0;i<=2;i++)
	{
		printf("\n\nEnter number a[%d]:",i);
		scanf("%d",&a[i]);
		for(j=i;j<=i;j++)
		{
			printf("\nEnter number b[%d]:",j);
			scanf("%d",&b[j]);
		printf("\n[%d]+[%d]=%d",a[i],b[j],a[i]+b[j]);
		}
	}
	getch();

}