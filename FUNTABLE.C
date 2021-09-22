#include<stdio.h>
#include<conio.h>
void tab(int x);
void main()
{
   int n;
   clrscr();
   printf("Enter the n:");
   scanf("%d",&n);
   tab(n);
   getch();
}
void tab(int x)
{
   int i,j;
   for(i=1;i<=x;i++)
   {
	printf("\n");
	for(j=1;j<=10;j++)
	{
		printf("%d\t",i*j);
	}
   }
}
