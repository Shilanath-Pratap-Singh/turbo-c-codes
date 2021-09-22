#include<stdio.h>
#include<conio.h>
int sum(int  ,int );    //function declaration
void main()
{
	int a,b,c;
	clrscr();
	//printf("Enter two number:");
	//scanf("%d%d",&a,&b);
	c=sum(a,b);           //function call
	printf("%d",c);
	getch();
}
int sum()    //function definition
{
int xx,yy,s;
printf("Enter two number:");
scanf("%d%d",&xx,&yy);
s=xx+yy;
return(s);
}