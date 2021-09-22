#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,num,num2,j,don;
	clrscr();
	printf("enter");
	scanf("%d",&n);
	while(i<=n)
	{
		num=i;
		num2=num;
		j=2;
		while(j<=num-1)
		{
		   don=num2%j;
		   if(don==0)
		   break;
		   j++;
		}
		if(don!=0)
		{
		printf("%d ",num2);
		}
		i++;
	}
}