#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,num,rd,cb=0;
	clrscr();
	printf("enter number:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rd=n%10;
		cb=cb+pow(rd,3);
		n=n/10;
	}
	if(num==cb)
	{
		printf("%d is armstrong no.",num);
	}
	else
	{
		printf("%d is not armstrong no.",num);
	}
	getch();

}