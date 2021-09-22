#include<stdio.h>
void main()
{
	int d,i,a=1,b=0;
	clrscr();
	printf("how many digit you want in fibonacic series:");
	scanf("%d",&d);
	for(i=1;i<=d;i++)
	{
		a=a+b;
		b=a-b;
		printf("%d ",a);
	}
	getch();
}