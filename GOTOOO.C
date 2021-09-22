#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double x,y;
	clrscr();
	read:
	scanf("%Lf",&x);
	if(x<0)
	goto read;
	y=sqrt(x);
	printf("%Lf %Lf\n",x,y);
	//goto read;
	getch();
}