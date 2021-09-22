#include<stdio.h>
#include<conio.h>
void main()
{       int n,i=1,num;
	clrscr();
	printf("Enter");
	scanf("%d",&n);
	while(i<=n)
	{
	     if(n%i==0)
	     {
	     printf("%d",i);
	     }
	     i++;
	}

}