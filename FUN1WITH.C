		//no argument with return value
#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
	int su;
	clrscr();
	su=sum();
	printf("Addition:%d",su);
	getch();
}
int sum()
{
	int p,r,t,s;
	printf("enter p,r,t number:");
	scanf("%d%d%d",&p,&r,&t);
	s=p*r*t/100;
	return(s);
}